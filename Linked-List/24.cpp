Node *rotateDLL(Node *start,int p)
{
    Node *curr=start;
    while(p!=0){
        curr=curr->next;
        p--;
    }
    curr->prev->next=NULL;
    Node *head1=start;
    curr->prev=NULL;
    Node *head2=curr;
    
    curr=head2;
    while(curr->next!=NULL){
        curr=curr->next;
        p--;
    }
    Node *tail1=curr;
    tail1->next=head1;
    head1->prev=tail1;
    return head2;
}