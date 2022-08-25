void solve(vector<vector<int>>& ans, vector<int> ds, map<int,int> mp, vector<int> arr ,int n){
    // base case
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<n;i++){
        if(mp[i]==1){
            continue;
        }
        ds.push_back(arr[i]);
        mp[i]=1;
        solve(ans, ds, mp, arr,n);
        ds.pop_back();
        mp[i]=0;
    }
}
vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
    vector<vector<int>> ans;
    vector<int> ds;
    map<int, int> mp;
    // sort(arr.begin(), arr.end());
    solve(ans, ds, mp, arr,n);
    return ans;
}