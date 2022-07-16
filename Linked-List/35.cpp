int getNthFromLast(Node *head, int n)
{
    int length=0;
    Node *curr=head;
    while(curr!=NULL){
        length++;
        curr=curr->next;
    }
    int position=length-n+1;
    if(position<1){
        return -1;
    }
    curr=head;
    for(int i=1;i<position;i++){
        curr=curr->next;
    }
    return curr->data;
}