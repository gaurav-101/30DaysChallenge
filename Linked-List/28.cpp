Node* segregate(Node *head) {
    if(head==NULL){
        return NULL;
    }
    int count0=0,count1=0,count2=0;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            count0++;
        }
        else if(curr->data==1){
            count1++;
        }
        else{
            count2++;
        }
        curr=curr->next;
    }
    curr=head;
    for(int i=0;i<count0;i++){
        curr->data = 0;
        curr=curr->next;
    }
    for(int i=0;i<count1;i++){
        curr->data = 1;
        curr=curr->next;
    }
    for(int i=0;i<count2;i++){
        curr->data = 2;
        curr=curr->next;
    }
    return head;
}