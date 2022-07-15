void removeLoop(Node* head)
{
    Node* high=head;
    Node* low=head;
    while(high!=NULL and high->next != NULL){
        high=high->next->next;
        low=low->next;
        if(high==low){
            break;
        }
    }
    high=head;
    //exception when low==high = head (when itersection is on head)
    if(low==head){
        while(high!=NULL){
            if((high->next)==(low)){
                high->next=NULL;
                return;
            }
            high=high->next;
        }
    }
    else{
        while(high!=NULL and low!=NULL){
            if((high->next)==(low->next)){
                low->next=NULL;
                return;
            }
            high=high->next;
            low=low->next;
        }
    }
    return;
}