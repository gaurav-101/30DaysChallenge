string printSequence(string S)
{
    string st[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    string ans="";
    int i=0;
    while(i<S.length()){
        if(S[i]==' '){
            ans+= "0";
        }
        else{
            ans+= st[S[i]-'A'];
        }
        i++;
    }
    return ans;
}