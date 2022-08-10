void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    
    Node* temp=root;
    
    while(temp->key!=key){
        if(temp->key>key){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    Node* prec=temp->left;
    Node* succ=temp->right;
    while(prec!=NULL){
        pre=prec;
        prec=prec->right;
    }
    while(succ!=NULL){
        suc=succ;
        succ=succ->left;
    }
    return;

}