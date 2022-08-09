Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* solve (Node* root, int x){
    if(root==NULL){
        return NULL;
    }
    if(root->data==x){
        if(root->right==NULL and root->left==NULL){
            delete root;
            return NULL;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else{
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=solve(root->right,mini);
            return root;
        }
    }
    
    else if(root->data>x){
        root->left= solve(root->left,x);
        return root;
    } 
    else{
        root->right= solve(root->right,x);
        return root;
    } 
}

Node *deleteNode(Node *root, int x) {
    Node* temp=root;
    return solve(root,x);
    
}