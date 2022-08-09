int solve(Node* root, int k,int& i){
    if(root==NULL){
        return -1;
    }
    
    int left=solve(root->left,k,i);
    if(left!=-1){
        return left;
    }
    
    i++;
    if(i==k){
        int ans=root->data;
        return ans;
    }
    
    return solve(root->right,k,i);
}

int KthSmallestElement(Node *root, int K) {
    int i=0;
    return solve(root,K,i);
}