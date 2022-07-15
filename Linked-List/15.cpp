int getLength(Node* head){
    int length=0;
    Node* curr=head;
    while(curr!=NULL){
        length++;
        curr=curr->next;
    }
    return length;
}
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    if(head==NULL){
        return -1;
    }
    int length=getLength(head);
    Node* ans=head;
    // cout<<length<<endl;
    for(int i=1;i<=length/2; i++){
        // cout<<i<<endl;
        ans=ans->next;
    }
    return ans->data;
}