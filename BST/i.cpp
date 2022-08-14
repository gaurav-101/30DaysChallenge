void inorder(TreeNode<int>* root, vector<TreeNode<int>*>& a){
    if(root==NULL) return;
    inorder(root->left,a);
    a.push_back(root);
    inorder(root->right,a);
}
void merge(vector<TreeNode<int>*>& merged, vector<TreeNode<int>*> a, vector<TreeNode<int>*> b){
    int i=0,j=0;
    while(i<a.size() and j<b.size()){
        if((a[i]->data)<(b[j]->data)) {
            merged.push_back(a[i]);
            i++;
        }
        else{
            merged.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        merged.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        merged.push_back(b[j]);
        j++;
    }
}
TreeNode<int> *bst(vector<TreeNode<int>*> merged, int l, int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    TreeNode<int> *root=merged[mid];
    root->left=bst(merged,l,mid-1);
    root->right=bst(merged,mid+1, r);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<TreeNode<int>*> a;
    vector<TreeNode<int>*> b;
    //Stored inorder of two bsts
    inorder(root1, a);
    inorder(root2, b);
    vector<TreeNode<int>*> merged;
    // merge two inorders of bsts to get inorder of final bst
    merge(merged, a, b);
    //make bst from inorder
    return bst(merged,0,merged.size()-1);
}