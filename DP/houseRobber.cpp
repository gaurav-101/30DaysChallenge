long long int solve(vector<int> &nums){
    int n=nums.size();
    long long int next1=0;
    long long int next2=0;
    
    for(int i=n-1; i>=0; i--){
        // take
        long long int sum1=nums[i] + next2;
        // not take
        long long int sum2=next1;
        
        long long int curr=max(sum1, sum2);
        
        next2=next1;
        next1=curr;
    }
    
    return next1;
}


long long int houseRobber(vector<int>& valueInHouse)
{
    int n=valueInHouse.size();
    vector<int> startIsTaken, endIsTaken;
    if(n==1){
        return valueInHouse[0];
    }
    
    for(int i=0; i<n; i++){
        if(i!=n-1){
            startIsTaken.push_back(valueInHouse[i]);
        }
        if(i!=0){
            endIsTaken.push_back(valueInHouse[i]);
        }
    }
    return max(solve(startIsTaken), solve(endIsTaken));
}