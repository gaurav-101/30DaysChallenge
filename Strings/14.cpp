// Method-1 Using recursion
// O(3^n)

int solve(string s, string t, int i, int j){
    //base case
    if(i<0) return j+1;
    if(j<0) return i+1;
    
    if(s[i]==t[j]){
        return solve(s,t,i-1,j-1);
    }
    else{
        return 1+ min(solve(s,t,i,j-1), min(solve(s,t,i-1,j),solve(s,t,i-1,j-1)));
    }
}
int editDistance(string s, string t) {
    int i=s.length();
    int j=t.length();
    return solve(s,t,i-1,j-1);
}