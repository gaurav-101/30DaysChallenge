bool isCircular(struct Node *head){
    struct Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
        if(curr==head){
            return 1;
        }
    }
    return 0;//code here
}