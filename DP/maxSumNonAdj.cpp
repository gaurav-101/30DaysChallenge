//method-4
// space optimisation
int solve(vector<int> &nums){
    int n=nums.size();
    int next1=0;
    int next2=0;
    
    for(int i=n-1; i>=0; i--){
        // take
        int sum1=nums[i] + next2;
        // not take
        int sum2=next1;
        
        int curr=max(sum1, sum2);
        
        next2=next1;
        next1=curr;
    }
    
    return next1;
}


int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    return solve(nums);
}


//method-3
//tabulation
int solve(vector<int> &nums, vector<int>& dp){
    int n=nums.size();
    dp[n]=0;
    dp[n+1]=0;
    
    for(int i=n-1; i>=0; i--){
        // take
        int sum1=nums[i] + dp[i+2];
        // not take
        int sum2=dp[i+1];
        dp[i]= max(sum1, sum2);
    }
    
    return dp[0];
}


int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n+2, -1);
    return solve(nums, dp);
}

//method-2
//recursion and memoization
int solve(vector<int> &nums, int index, vector<int>& dp){
    if(index>=nums.size()){
        return 0;
    }
    
    if(dp[index]!=-1){
        return dp[index];
    }
    // take
    int sum1=nums[index] + solve(nums, index + 2, dp);
    
    //not taken
    int sum2=solve(nums, index + 1, dp);
    
    return dp[index]=max(sum1, sum2);
}


int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n, -1);
    return solve(nums,0, dp);
}

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