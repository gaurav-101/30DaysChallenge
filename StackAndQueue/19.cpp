int checkRedundancy(string s) {
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            if(st.top()=='(') return 1;
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='('){
            st.push(s[i]);
        }
    }
    return 0;
}