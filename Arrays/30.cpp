long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    int i=m-1;
    while(i<n){
        ans=min(ans, a[i]-a[i-m+1]);
        i++;
    }
    return ans;
}   