int countSquares(int N) {
    int ans=0;
    for(int i=1;i*i<=N;i++){
        if(i*i < N){
            ans++;
        }
    }
    return ans;
}