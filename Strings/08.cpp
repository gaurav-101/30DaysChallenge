string longestPalin (string s) {
    if(s.length()<=1){
        return s;
    }
    int maxlen=1;
    int n=s.length();
    int st=0, end=0;
    // Odd length
    for (int i=0;i<n-1;i++){
        int l=i,r=i;
        while(l>=0 && r<n){
            if(s[l]==s[r]){
                l--;r++;
            }
            else{
                break;
            }
            int len=r-l-1;
            if(len>maxlen){
                maxlen=len;
                st=l+1;
                end=r-1;
            }
        }
    }
    // Even length
    for (int i=0;i<n-1;i++){
        int l=i,r=i+1;
        while(l>=0 && r<n){
            if(s[l]==s[r]){
                l--;r++;
            }
            else{
                break;
            }
            int len=r-l-1;
            if(len>maxlen){
                maxlen=len;
                st=l+1;
                end=r-1;
            }
        }
    }
    
    return s.substr(st, maxlen);
    
}