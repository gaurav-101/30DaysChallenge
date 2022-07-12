bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0,j=1;
    
    while(j<size){
        int diff=arr[j]-arr[i];
        if(i==j){
            j++;
            continue;
        }
        if(diff==n){
            return 1;
        }
        else if(diff<n){
            j++;
        }
        else{
            i++;
        }
    }
    return 0;
}