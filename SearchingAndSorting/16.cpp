vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
    vector<long long int> ans;
    long long int product=1;
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            count++;
        }
        else{
            product*= nums[i];
        }
    }
    for(int i=0;i<n;i++){
        if(count>1){
            ans.push_back(0);
        }
        else if(count==1){
            if(nums[i]==0){
                ans.push_back(product);
            }
            else{
                ans.push_back(0);
            }
        }
        else{
            ans.push_back(product/nums[i]);
        }
    }
    return ans;
}