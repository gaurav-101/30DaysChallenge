// Study with saumya
void solve(int i,int j,int n,int &ans){
    if(i>j){
        return;
    }
    int mid=(i+j)/2;
    int count=0;
    int temp=mid/5;
    while(temp>0){
        count+=temp;
        temp/=5;
    }
    if(count>=n){
        ans=mid;
        solve(i,mid-1,n,ans);
    }
    else{
        solve(mid+1,j,n,ans);
    }
}
int findNum(int n)
{
    int ans;
    
    solve(0,n*5,n,ans);
    return ans;
}