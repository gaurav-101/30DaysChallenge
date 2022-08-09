bool ans(Node* root,int mini,int maxi){
    if(root==NULL) return true;
    
    if(root->data>=mini and root->data<=maxi){
        bool left=ans(root->left,mini,root->data);
        bool right=ans(root->right,root->data,maxi);
        return left and right;
    }
    else{
        return false;
    }
}
bool isBST(Node* root) 
{
    return ans(root,INT_MIN,INT_MAX);
}