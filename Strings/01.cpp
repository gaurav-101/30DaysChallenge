// Using two pointer
void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            char temp=s[end];
            s[end]=s[start];
            s[start]=temp;
            start++;
            end--;
        }
    }

// Using Recursion
void ans(vector<char>& s, int st, int n){ 
    if(st>n-st-1){
        return;
    }
    swap(s[st],s[n-st-1]);
    st++;
    return ans(s, st, n);
}
void reverseString(vector<char>& s) {
    int n=s.size();
    int st=0;
    ans(s,st,n);
}