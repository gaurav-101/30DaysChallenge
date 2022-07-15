void removeDuplicates(struct Node* head)
{
    struct Node* curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data)
            curr->next=curr->next->next;
        //No upgradation of head
        else curr=curr->next;
    }
    return;
}