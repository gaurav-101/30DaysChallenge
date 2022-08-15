int countNode(struct Node* tree){
    if(tree==NULL) return 0;
    
    int ans=1+ countNode(tree->left)+ countNode(tree->right);
    return ans;
}
bool isCBT(struct Node* tree, int index, int totalCount){
    if(tree==NULL) return true;
    
    if(index>=totalCount) return false;
    
    else{
        bool left=isCBT(tree->left, 2*index +1, totalCount);
        bool right=isCBT(tree->right, 2*index+2, totalCount);
        return (left and right);
    }
}
bool isMaxOrder(struct Node* tree){
    //leaf Node
    if(tree->right==NULL and tree->left==NULL) return true;
    
    // one child
    if(tree->right==NULL){
        return (tree->data>tree->left->data) ;
    }
    
    //two child
    else{
        bool left=isMaxOrder(tree->left);
        bool right=isMaxOrder(tree->right);
        
        return left and right and (tree->data>tree->left->data and tree->data>tree->right->data);
    }
}
bool isHeap(struct Node* tree) {
    int index=0;
    int totalCount=countNode(tree);
    if(isCBT(tree, index, totalCount) and isMaxOrder(tree)){
        return true;
    }
    return false;
}