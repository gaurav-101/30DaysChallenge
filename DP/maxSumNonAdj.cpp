//method-1 
// recursion
int solve(vector<int> &nums, int index){
    if(index>=nums.size()){
        return 0;
    }
    // take
    int sum1=nums[index] + solve(nums, index + 2);
    
    //not taken
    int sum2=solve(nums, index + 1);
    
    return max(sum1, sum2);
}


int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums,0);
}