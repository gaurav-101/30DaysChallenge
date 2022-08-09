int solve(Node* root, int k,int& i){
    //Base case
    if(root==NULL){
        return -1;
    }
    
    //firstly we will check the left part of tree
    int left=solve(root->left,k,i);
    //if we will get the kth element in left part then we will return it
    if(left!=-1){
        return left;
    }
    
    //  we are incrementing i
    i++;
    if(i==k){
        int ans=root->data;
        return ans;
    }
    
    //at last we will check on right side
    return solve(root->right,k,i);
}

int KthSmallestElement(Node *root, int K) {
    int i=0;
    return solve(root,K,i);
}