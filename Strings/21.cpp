int countRev (string s)
{
    int i=0;
    int ans=0;
    int openBraceCount=0;
    while(i<s.length()){
        if(s[i]=='}' and openBraceCount==0){
            ans++;
            openBraceCount++;
        }
        else if(s[i]=='}'){
            openBraceCount--;
        }
        else{
            openBraceCount++;
        }
        i++;
    }
    // if open bracket are remaining...
    if(openBraceCount%2==0){
        ans+= openBraceCount/2;
        return ans;
    }
    return -1;
}