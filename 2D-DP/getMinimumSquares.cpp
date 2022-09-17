int solve(int target, int index, vector<vector<int>>& dp){
    if(target==0){
        return 1;
    }
    
    if(target<0 or index<=0){
        return INT_MAX;
    }
    
    if(dp[target][index]!=-1){
        return dp[target][index];
    }
    
    int taken=INT_MAX;
    if(target>= pow(index, 2))
        taken = 1 + solve(target-pow(index, 2), index, dp);
    
    int notTaken=solve(target, index-1, dp);
    
    return dp[target][index]=min(taken, notTaken);
}
int MinSquares(int n)
{
    int index=n;
    vector<vector<int>> dp(n+1,vector<int> (n+1, -1));
    return solve(n,index, dp) -1;
}