vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> s;
    
    for(int i=n-1;i>=0;i--){
        while(!s.empty() and arr[i]>=s.top()){
            s.pop();
        }
        if(s.empty()){
            s.push(arr[i]);
            arr[i]=-1;
        } 
        else{
            long long temp=s.top();
            s.push(arr[i]);
            arr[i]=temp;
        }
    }
    
    return arr;
}