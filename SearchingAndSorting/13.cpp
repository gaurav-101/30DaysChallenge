long long countTriplets(long long arr[], int n, long long k)
{
    sort(arr,arr+n);
    int i=0;
    int left,right;
    
    long long ans=0;
    while(i<n-2){
        left=i+1;
        right=n-1;
        long long remainSum=k-arr[i];
        while(left<right){
            long long temp=arr[left]+arr[right];
            
            if(temp<remainSum){
                ans+= right-left;
                left++;
            }
            else{
                right--;
            }
        }
            
        i++;
    }
    return ans;
}