int solve2(int arr[], int x, int i, int j){
    int ans=-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==x){
            ans=mid;
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
    
}
int solve1(int arr[], int x, int i, int j){
    int ans=-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==x){
            ans=mid;
            j=mid-1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
    
}
vector<int> find(int arr[], int n , int x )
{
    int i=0,j=n-1;
    int mid=(i+j)/2;
    int ans1=solve1(arr,x,i,j);
    int ans2=solve2(arr,x,i,j);
    vector<int> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}