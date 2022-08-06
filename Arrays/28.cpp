bool find3Numbers(int a[], int n, int x)
{
    bool ans=false;
    sort(a,a+n);
    int i=0;
    int start,end;
    while(i<n-2){
        int temp=x-a[i];
        start=i+1;
        end=n-1;
        while(start<end){
            int sum=a[start]+a[end];
            if(sum==temp){
                return true;
            }
            else if(sum<temp){
                start++;
            }
            else{
                end--;
            }
        }
        i++;
    }
    return ans;
}