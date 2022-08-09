//Iterative Method
bool search(Node* root, int x) {
    Node* temp=root;
    while(root!=NULL){
        if(root->data==x) return true;
        else if(root->data>x) root=root->left;
        else root=root->right;
    }
    return false;
}

//Recursive method
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