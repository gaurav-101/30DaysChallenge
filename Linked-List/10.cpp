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
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    reverseLL(first);
    reverseLL(second);
    int sum=first->data + second->data;
    int carry=sum/10;
    Node* ansHead = new Node(sum%10);
    Node* ansTail = ansHead;
    struct Node* temp1=first->next;
    struct Node* temp2=second->next;
    while(temp1!=NULL and temp2!=NULL){
        sum=temp1->data + temp2->data + carry;
        
        carry=sum/10;
        ansTail->next = new Node(sum%10);
        temp1=temp1->next;
        temp2=temp2->next;
        ansTail=ansTail->next;
    }
    while(temp1!=NULL){
        sum=temp1->data + carry;
        carry=sum/10;
        ansTail->next = new Node(sum%10);
        temp1=temp1->next;
        ansTail=ansTail->next;
    }
    while(temp2!=NULL){
        sum=temp2->data + carry;
        carry=sum/10;
        ansTail->next = new Node(sum%10);
        temp2=temp2->next;
        ansTail=ansTail->next;
    }
    while(carry!=0){
        ansTail->next = new Node(carry%10);
        carry/=10;
        ansTail=ansTail->next;
    }
    reverseLL(ansHead);
    return ansHead;
}