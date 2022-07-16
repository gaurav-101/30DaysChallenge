void reverseLL(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}
Node *compute(Node *head)
{
    reverseLL(head);
    Node* curr=head;
    int maxi=curr->data;
    while(curr->next!=NULL){
        if(maxi>curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            maxi=curr->next->data;
            curr=curr->next;
        }
    }
    reverseLL(head);
    return head;
}