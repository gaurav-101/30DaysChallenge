class node{
    public:
        int data;
        int i;
        int j;
    node(int data, int row, int col){
        this->data=data;
        i=row;
        j=col;
    }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a->data > b->data;
        }
};

class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
         // step 1 -> saare elements ke first element push kr do minHeap me
         priority_queue<node*, vector<node*>, compare> mini;
         for(int i=0;i<k;i++){
             node* temp= new node(arr[i][0], i, 0);
             mini.push(temp);
         }
         vector<int> ans;
         
         while(mini.size()>=1){
             int dataa=mini.top()->data;
             int ii=mini.top()->i;
             int jj=mini.top()->j;
             ans.push_back(dataa);
             mini.pop();
             jj++;
             if(jj < arr[ii].size()){
                 node* temp= new node(arr[ii][jj], ii, jj);
                 mini.push(temp);
             }
         }
         return ans;
    }
};