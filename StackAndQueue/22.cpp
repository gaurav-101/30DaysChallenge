int isStackPermutation(int n,vector<int> &A,vector<int> &B){
    stack<int> st;
    int i=0;
    int j=0;
    
    while(j<n){
        if(st.empty()){
            st.push(A[i]);
            i++;
        }
        else if(st.top()==B[j]){
            A[j]=B[j];
            st.pop();
            j++;
        }
        else{
            
            if(i>=n){
                return 0;
            }
            
            st.push(A[i]);
            i++;
        }
        
    }
    return 1;
}