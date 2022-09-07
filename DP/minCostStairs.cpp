// Method-1
int solve(vector<int> cost ,int i, int N, vector<int> &dp){
    if(i>=N){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int p1=solve(cost, i+1, N, dp) + cost[i];
    int p2=solve(cost, i+2, N, dp) + cost[i];
    return dp[i]=min(p1, p2);
}

int minCostClimbingStairs(vector<int>&cost ,int N) {
    vector<int> dp(N+1, -1);
    return min(solve(cost,0, N, dp), solve(cost, 1, N, dp));
}

//Method - 2
