Node * segregateOddEven (Node * head)
{
    Node * curr=head;
    Node * oddHead=NULL;
    Node * oddTail=NULL;
    Node * evenHead=NULL;
    Node * evenTail=NULL;
    int i=1,j=1;
    while(curr!=NULL){
        if(curr->data % 2 ==1){
            if(oddHead == NULL){
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
            if(evenHead == NULL){
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
    if (oddHead == NULL)
        return evenHead;
    if(evenHead == NULL)
        return oddHead;
    
    evenTail->next=NULL;
    oddTail->next=evenHead;
    return oddHead;
}