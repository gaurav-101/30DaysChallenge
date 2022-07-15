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
Node* addOne(Node *head) 
{
    reverseLL(head);
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data<9){
            curr->data += 1;
            break;
        }
        else{
            curr->data=0;
            if(curr->next==NULL){
                Node* neww=new Node(1);
                curr->next=neww;
                break;
            }
            
        }
        curr=curr->next;
    }
    reverseLL(head);
    return head;
}