pair<long long, long long> getMinMax(long long arr[], int n) {
    pair<long long, long long> ans;
    long long maxi=INT_MIN;
    long long mini=INT_MAX;
    for(long long i=0; i<n; i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
        if(mini>arr[i]){
            mini=arr[i];
        }
    }
    ans.first=mini;
    ans.second=maxi;
    return ans;
}