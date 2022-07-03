bool subArrayExists(int arr[], int n)
    {
        map<int,int> sum;
        int temp=0;
        sum[temp]++;
        for (int i=0;i<n;i++){
            temp+=arr[i];
            if(sum[temp]){
                return true;
            }
            sum[temp]++;
        }
        return false;
        
    }