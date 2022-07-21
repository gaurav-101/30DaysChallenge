int celebrity(vector<vector<int> >& M, int n) 
{
    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
        int i=st.top();
        st.pop();
        int j=st.top();
        st.pop();
        if(M[i][j]==1){
            st.push(j);
        }
        else{
            st.push(i);
        }
    }
    int potentialCelebrity=st.top();
    for(int i=0;i<n;i++){
        if(M[potentialCelebrity][i]==1){
            return -1;
        }
        if(M[i][potentialCelebrity]==0 and i!=potentialCelebrity){
            return -1;
        }
    }
    return potentialCelebrity;
}