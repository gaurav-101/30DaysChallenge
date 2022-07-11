//Binary Search Question 1
long long int floorSqrt(long long int x) 
{
    long long int i=1, j=x;
    long long int ans;
    while(i<=j){
        long long int mid=(i+j)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}

// Question 2
int countSquares(int N) {
    int ans=0;
    for(int i=1;i*i<=N;i++){
        if(i*i < N){
            ans++;
        }
    }
    return ans;
}