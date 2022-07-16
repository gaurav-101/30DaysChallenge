Node * segregateOddEven (Node * head)
{
    Node * curr=head;
    Node * oddHead;
    Node * oddTail;
    Node * evenHead;
    Node * evenTail;
    int i=1,j=1;
    while(curr!=NULL){
        if(curr->data % 2 ==1){
            if(i==1){
                oddHead=curr;
                oddTail=oddHead;
            }
            else{
                oddTail->next=curr;
                oddTail=oddTail->next;
            }
            i++;
        }
        else{
            if(j==1){
                evenHead=curr;
                evenTail=evenHead;
            }
            else{
                evenTail->next=curr;
                evenTail=evenTail->next;
            }
            j++;
        }
        curr=curr->next;
    }
    evenTail->next=NULL;
    oddTail->next=evenHead;
    return oddHead;
}