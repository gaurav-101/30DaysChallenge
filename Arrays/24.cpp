int findLongestConseqSubseq(int arr[], int n)
{
    map<int,int> a;
    for(int i=0;i<n;i++) a[arr[i]]++;
    int ans=0;
    map<int, int>::iterator itr;
    for (itr = a.begin(); itr != a.end(); ++itr) {
        int temp=itr->first;
        int count=0;
        
        while(a[temp]){
            temp++;
            if(count==0){
                count=1;
            }
            else{
                itr++;
                count++;
            }
        }
        ans=max(ans,count);
    }

    return ans;
}