int evaluatePostfix(string s)
{
    stack<int> st1;
    int a,b,ans;
    for(int i=0;i<s.length();i++){
        if(s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-'){
            a=st1.top();
            st1.pop();
            b=st1.top();
            st1.pop();
            if(s[i]=='*') ans=b*a;
            else if(s[i]=='/') ans=b/a;
            else if(s[i]=='+') ans=b+a;
            else ans=b-a;
            
            st1.push(ans);
        }
        else
            st1.push(s[i]-'0');
    }
    
    return st1.top();
}