//iterative way 
Node* LCA(Node *root, int n1, int n2)
{
    Node* temp=root;
    
    while(temp!=NULL){
        if(temp->data>n1 and temp->data>n2){
            temp=temp->left;
        }
        else if(temp->data<n1 and temp->data<n2){
            temp=temp->right;
        }
        else{
            return temp;
        }
        
    }
   return temp;
}

//Recursive way

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