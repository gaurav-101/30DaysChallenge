void insert_at_bottom(stack<int>& st, int x){
    if(st.size()==0){
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        insert_at_bottom(st,x);
        st.push(a);
    }
}
void reverse(stack<int>& st){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reverse(st);
        insert_at_bottom(st, x);
    }
}