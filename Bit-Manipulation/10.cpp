vector<string> AllPossibleStrings(string s){
    vector<string> ans;
    int n=s.length();
    
    for(int num=1; num<pow(2,n); num++){
        string temp="";
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                temp+=s[i];
            }
        }
        ans.push_back(temp);
    }
    sort(ans.begin(),ans.end());
    return ans;
}