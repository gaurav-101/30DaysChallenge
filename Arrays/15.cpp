void nextPermutation(vector<int>& a) {
    int n=a.size();
    int i,j;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            break;
        }
    }
    if(i<0){
        reverse(a.begin(), a.end());
    }
    else{
        for(int j=n-1;j>i;j--){
            if(a[j]>a[i]){
                break;
            }
        }
        swap(a[i],a[j]);
        reverse(a.begin() + i +1, a.end());
    }
}