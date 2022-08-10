void solve(struct Node *root, vector<int>& inorder){
    if(root==NULL) return;
    
    solve(root->left,inorder);
    inorder.push_back(root->data);
    solve(root->right,inorder);
    return;
}
int search(vector<int> inorder, int target){
    int left=0, right=inorder.size()-1;
    while(left<right){
        int tempSum=inorder[right]+inorder[left];
        if(tempSum==target){
            return 1;
        }
        else if(tempSum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
}
int isPairPresent(struct Node *root, int target)
{
    vector<int> inorder;
    solve(root, inorder);
    return search(inorder,target);
}