long long maxSubarraySum(int arr[], int n){
    
    long long maxSum=arr[0], prevSum=arr[0];
    for(int i=1;i<n;i++){
        if(prevSum<0){
            prevSum=arr[i];
        }
        else{
            prevSum+=arr[i];
        }
        if(maxSum<prevSum){
            maxSum=prevSum;
        }
    }
    return maxSum;
}