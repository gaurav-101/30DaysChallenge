void rotate(int arr[], int n)
{
    int temp;
    int a=arr[n-1];
    
    for(int i=n-1;i>0;i--){
        temp=arr[i-1];
        arr[i]=temp;
    }
    arr[0]=a;
    
}