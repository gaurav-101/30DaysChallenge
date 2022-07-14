bool isPowerofTwo(long long n){
    int count=0;
    if(n==0){
        return false;
    }
    while(n!=0){
        if(n&1){
            count++;
            if(count>1){
                return false;
            }
        }
        n=n>>1;
    }
    
    return true;
}