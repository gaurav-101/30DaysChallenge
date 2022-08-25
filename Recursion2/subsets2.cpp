void solve(vector<vector<int>>& ans, vector<int> nums, vector<int> ds, int n, int index){
    ans.push_back(ds);

    //pickup
    for(int i=index; i<n; i++){
        if(i>index and nums[i]==nums[i-1]){
            continue;
        }
        ds.push_back(nums[i]);
        solve(ans, nums,ds, n, i+1);
        ds.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    int sum=0;
    int index=0;
    int n=nums.size();
    sort(nums.begin(), nums.end());
    vector<int> ds;
    solve(ans,nums,ds,n, index);
    return ans;
}