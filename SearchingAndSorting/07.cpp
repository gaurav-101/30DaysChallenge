// Method-3 
int *findTwoElement(int *arr, int n) {
    int* ans=new int(2);
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i]) -1] > 0){
            arr[abs(arr[i]) -1]=-arr[abs(arr[i]) -1];
        }
        else{
            ans[0]=abs(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[1]=i+1;
        }
    }
    return ans;
}


// Method-2  MY method
int *findTwoElement(int *arr, int n) {
    int* ans=new int(2);
    int a= n*(n+1)/2;
    int sum=0;
    long long int sqsum=0;
    long long int b=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        sqsum+= arr[i]*arr[i];
        b+= (i+1)*(i+1);
    }
    int diff=sum-a;
    long long int summ= (sqsum-b)/diff ;
    ans[0]=(summ + diff)/2;
    ans[1]=(summ - diff)/2;
    return ans;
}