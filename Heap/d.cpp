long long minCost(long long arr[], long long n) {
    priority_queue<long long,vector<long long>,greater<long long>> minHeap;
    for(long long i=0;i<n;i++){
        minHeap.push(arr[i]);
    }
    long long size=n;
    long long ans=0;
    while(size>1){
        long long temp1=minHeap.top();
        minHeap.pop();
        long long temp2=minHeap.top();
        minHeap.pop();
        ans+=temp1+temp2;
        minHeap.push(temp1+temp2);
        size--;
    }
    return ans;
}