void solve(vector<vector<int>>& ans, int index, int target, vector<int> a, vector<int> ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    
    for(int i=index;i<a.size();i++){
        if(i>index and a[i]==a[i-1]) continue;
        if(target<a[i]) break;
        ds.push_back(a[i]);
        solve(ans, i+1, target-a[i], a, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    int index=0;
    sort(candidates.begin(), candidates.end());
    solve(ans, index, target, candidates, ds);
    return ans;
}