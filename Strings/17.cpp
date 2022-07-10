
// Method -1 Mine
int lps(string s) {
    int ans=0;
    string temp=s+s;
    int n=s.length();
    int i=1;
    string s1,s2;
    while(i<n){
        s1=temp.substr(n-i,i);
        s2=temp.substr(n, i);
        // cout<<s1<< " "<< s2<< endl;
        if(s1==s2){
            ans=i;
        }
        i++;
    }
    return ans;
}