ll findSubarray(vector<ll> arr, int n ) {
    map<ll,int> m;
    int sum=0;
    ll ans=0;
    m[sum]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if (m.find(sum) == m.end()) {
            m[sum] = 1;
        }
    
        else {
            m[sum]++;
        }
        
    }
    map<ll, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr) {
        ans+= ((itr->second)*(itr->second -1))/2;
    }
    return ans;
}