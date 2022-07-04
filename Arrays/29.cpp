long long trappingWater(int arr[], int n){
    long long ans=0;
    int* leftMax= new int[n];
    int* rightMax= new int[n];
    int maxi=arr[0];
    leftMax[0]=0;
    for(int i=1;i<n;i++){
        maxi=max(arr[i-1], maxi);
        leftMax[i]=maxi;
    }
    maxi=arr[n-1];
    rightMax[n-1]=0;
    for(int i=n-2;i>=0;i--){
        maxi=max(arr[i+1], maxi);
        rightMax[i]=maxi;
    }
    int mini;
    for(int i=0;i<n;i++){
        mini=min(leftMax[i],rightMax[i]);
        if(mini>arr[i]){
            ans+= mini-arr[i];
        }
    }
    return ans;
}