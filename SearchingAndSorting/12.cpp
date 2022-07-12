
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