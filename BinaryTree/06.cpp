//Iterative way
vector<int> inOrder(Node* node) {
    vector<int> ans;
    stack<Node*> st;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()) break;
            node=st.top();
            st.pop();
            ans.push_back(node->data);
            node=node->right;
        }
    }
    return ans;
}

//Recurive way

void solve(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
    return;
}
vector<int> inOrder(Node* root) {
    vector <int> ans;
    solve(root,ans);
    return ans;
}