Node* solve(Node *root, int n1, int n2){
    if(root==NULL) return NULL;
    
    if(root->data>n1 and root->data>n2){
        return solve(root->left,n1,n2);
    }
    else if(root->data<n1 and root->data<n2){
         return solve(root->right,n1,n2);
    }
    return root;
    
}
Node* LCA(Node *root, int n1, int n2)
{
   return solve(root,n1,n2);
}