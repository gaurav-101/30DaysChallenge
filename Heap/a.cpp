int kthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int> maxHeap;
    for(int i=l;i<k;i++){
        maxHeap.push(arr[i]);
    }
    for(int i=k;i<=r;i++){
        if(maxHeap.top()>arr[i]){
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    return maxHeap.top();
}