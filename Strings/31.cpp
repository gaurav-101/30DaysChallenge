int minimumNumberOfSwaps(string s){
    int open=0;
    int close=0;
    vector<int> openIndex;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            openIndex.push_back(i);
        }
    }
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            open++;
            j++;
        }
        else{
            if(open==0){
                ans+=openIndex[j]-i;
                swap(s[i],s[openIndex[j]]);
                j++;
                open++;
            }
            else{
                open--;
            }
        }
    }
    return ans;
}