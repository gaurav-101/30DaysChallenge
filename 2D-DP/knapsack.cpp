// Method -2 dp and memoization
int solve(int wt[], int val[], int index, int capacity, vector<vector<int>> dp){
    if(index==0){
        if(wt[0]<=capacity){
            return val[0];
        }
        else{
            return 0;
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    
    int include=0;
    if(wt[index]<=capacity){
        include=val[index] + solve(wt, val, index-1, capacity-wt[index], dp);
    }
    
    int exclude=solve(wt, val, index-1, capacity, dp);
    
    return dp[index][capacity] = max(include, exclude);
}

int knapSack(int w, int wt[], int val[], int n) 
{ 
    
    vector<vector<int>> dp(n, vector<int> (w+1, -1));
    return solve(wt, val, n-1, w, dp);
}

// Method-1 Recursion
int solve(int wt[], int val[], int index, int capacity){
    if(index==0){
        if(wt[0]<=capacity){
            return val[0];
        }
        else{
            return 0;
        }
    }
    
    int include=0;
    if(wt[index]<=capacity){
        include=val[index] + solve(wt, val, index-1, capacity-wt[index]);
    }
    
    int exclude=solve(wt, val, index-1, capacity);
    
    return max(include, exclude);
}
int knapSack(int w, int wt[], int val[], int n) 
{ 
    return solve(wt, val, n-1, w);
}