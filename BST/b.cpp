bool solve (Node* root, int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x) return true;
    else if(root->data>x) return solve(root->left,x);
    else return solve(root->right,x);
}
bool search(Node* root, int x) {
    return solve(root,x);
}