
// Simple Solution
    void sort012(int a[], int n)
    {
        int zeroes,ones,twos;
        zeroes=0;
        ones=0;
        twos=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zeroes++;
            }
            else if(a[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        } 
        for(int i=0;i<n;i++){
            if(i<zeroes){
                a[i]=0;
            }
            else if(i<zeroes+ones){
                a[i]=1;
            }
            else{
                a[i]=2;
            }
        }
    }