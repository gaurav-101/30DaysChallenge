// Method -1
long long int inversionCount(long long arr[], long long N)
{
    long long int count=0;
    for (long long i=0;i<N;i++){
        for(long long j=i+1;j<N;j++){
            if(arr[j]<arr[i]){
                count++;
            }
        }
    }
    return count;
}