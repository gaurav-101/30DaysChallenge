int solve(struct Node* node){
    if(node==NULL){
        return 0;
    }
    int h1=solve(node->left);
    int h2=solve(node->right);
    return max(h1,h2)+1;
}
int height(struct Node* node){
    
    return solve(node);

}