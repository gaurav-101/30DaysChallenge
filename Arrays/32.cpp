void threeWayPartition(vector<int>& arr,int a, int b)
{
    int start=0,end=arr.size()-1;
    int i=0;
    while(i<=end){
        if(arr[i]<a){
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else if(arr[i]>b){
            swap(arr[i],arr[end]);
            end--;
        }
        else{
            i++;
        }
    }
    return;
}