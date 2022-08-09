Node* solve(Node* root, int Key){
    if(root==NULL){
        root=new Node(Key);
        return root;
    }
    if(root->data==Key){
        return root;
    }
    else if(root->data<Key ) root->right=solve(root->right, Key);
    else root->left=solve(root->left, Key);
    
}
Node* insert(Node* root, int Key) {
    return solve(root, Key);
    
}