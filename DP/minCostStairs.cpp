//Method - 3
int solve(vector<int> cost, int N){
    
    int prev1=0;
    int prev2=0;
    for(int i=2; i<=N ; i++){
        int curr=min(prev1+cost[i-1], prev2+cost[i-2]);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}

int minCostClimbingStairs(vector<int>&cost ,int N) {
    return solve(cost, N);
}


//Method - 2
int solve(vector<int> cost, int N, vector<int> &dp){
    
    dp[0]=0;
    dp[1]=0;
    for(int i=2; i<=N ; i++){
        dp[i]=min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
    }
    return dp[N];
}

int minCostClimbingStairs(vector<int>&cost ,int N) {
    vector<int> dp(N+1, -1);
    return solve(cost, N, dp);
}

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


