void solve(vector<vector<int>>& ans, int index, int target, vector<int> a, vector<int> ds){
    if(index>=a.size() or target<0){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(a[index]);
    solve(ans, index, target-a[index], a, ds);
    ds.pop_back();
    solve(ans, index+1, target, a, ds);
}

vector<vector<int> > combinationSum(vector<int> &a, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    int index=0;
    sort(a.begin(), a.end());
    vector<int> a1;
    int prev=a[0];
    a1.push_back(prev);
    for(int i=1;i<a.size();i++){
        if(prev!=a[i]){
            prev=a[i];
            a1.push_back(prev);
        }
    }
    solve(ans, index, target, a1, ds);
    return ans;
}