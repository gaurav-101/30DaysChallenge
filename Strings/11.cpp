// Method -2

void solve(string nums, vector<string>& ans, int index){
    if(index >= nums.size()) {
        ans.push_back(nums);
        return ;
    }
    for(int j= index; j<nums.size(); j++) {
        swap (nums[index],nums[j]);
        solve(nums, ans,index+1);
        //backtrack
        swap(nums[index], nums[j]);
    }
    
}
vector<string>find_permutation(string a)
{
    vector<string> ans;
    sort(a.begin(), a.end());
    string temp=a;
    solve(a, ans, 0);
    sort(ans.begin(),ans.end());
    return ans;
}


// Method -1 

void nextPermutation(string& a) {
    int idx=-1;
    int n=a.size();
    for (int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(a.begin(),a.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1;i<n;i++){
            if(a[i]>a[idx-1] and a[i]<=a[prev]){
                prev=i;
            }
        }
        swap(a[idx-1],a[prev]);
        reverse(a.begin()+idx,a.end());
    }
}
vector<string>find_permutation(string a)
{
    vector<string> ans;
    sort(a.begin(), a.end());
    string temp=a;
    ans.push_back(a);
    nextPermutation(a);
    while(a!=temp){
        ans.push_back(a);
        nextPermutation(a);
    }
    return ans;
}