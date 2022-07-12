//Method-2 using recursion and dp
int dp[10001];
int solve(int arr[], int i){
    if(i<=-1){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int a=arr[i]+ solve(arr, i-2);
    int b=solve(arr, i-1);
    return dp[i]=max(a,b);
}
int FindMaxSum(int arr[], int n)
{
    int current=n-1;
    memset(dp,-1,sizeof(dp));
    return solve(arr, current);
}
//Method-1 only using recursion
int solve(int arr[], int i){
    if(i<=-1){
        return 0;
    }
    int a=arr[i]+ solve(arr, i-2);
    int b=solve(arr, i-1);
    return max(a,b);
}
int FindMaxSum(int arr[], int n)
{
    int current=n-1;
    
    return solve(arr, current);
}