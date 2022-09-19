// Method-2 tabulation 
int solve(int n){
    vector<int> dp(n+1, INT_MAX);
    
    dp[0]=0;
    
    for(int j=1; j<=n; j++){
        for(int i=1; i*i <= n; i++){
            int temp=i*i;
            if(j-temp>=0)
                dp[j] = min(dp[j], 1+ dp[j-temp] );
        }
    }
    return dp[n];
}
int MinSquares(int n)
{
    
    return solve(n);
}


// Method-1
int solve(int n, vector<int> &dp){
    if(n==0){
        return 0;
    }
    
    if(dp[n]!=-1){
        return dp[n];
    }
    
    int ans=n;
    for(int i=1; i*i <= n; i++){
        int temp=i*i;
        ans = min(ans,1+ solve(n-temp, dp) );
    }
    
    return dp[n]= ans;
}
int MinSquares(int n)
{
    vector<int> dp(n+1, -1);
    return solve(n, dp);
}