//Iterative Way
Node * mergeKLists(Node *arr[], int k)
{
    priority_queue<Node*, vector<Node*>, compare> mini;
    for(int i=0;i<k;i++){
        mini.push(arr[i]);
    }
    
    Node* root=mini.top();
    Node* temp=root;
    mini.pop();
    while(!mini.empty()){
        if(temp->next!=NULL){
            mini.push(temp->next);
        }
        temp->next=mini.top();
        mini.pop();
        temp=temp->next;
    }
    return root;
    
}


// Recursive Way
class compare{
    public:
        bool operator()(Node* a, Node* b){
            return a->data > b->data;
        }
};

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* solve(priority_queue<Node*, vector<Node*>, compare> mini){
        if(mini.empty()){
            return NULL;
        }
        Node* root=mini.top();
        mini.pop();
        if(root->next!=NULL){
            mini.push(root->next);
        }
        root->next=solve(mini);
        return root;
    }

    Node * mergeKLists(Node *arr[], int k)
    {
        priority_queue<Node*, vector<Node*>, compare> mini;
        for(int i=0;i<k;i++){
            mini.push(arr[i]);
        }
        
        return solve(mini);
        
    }
};