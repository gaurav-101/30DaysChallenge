struct Node* reverseList(struct Node *head)
{
    struct Node* prev=NULL;
    struct Node* curr=head;
    struct Node* forward;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
    
}