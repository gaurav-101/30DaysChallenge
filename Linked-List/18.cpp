void reverseLL(Node* &head,Node* prev, int n){
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

bool isPalindrome(Node *head)
{
    Node* curr=head;
    int length=0;
    while(curr!=NULL){
        curr=curr->next;
        length++;
    }
    
    int i=(length+1)/2 -1;
    curr=head;
    if(length==2){
        if(curr->data==curr->next->data){
            return 1;
        }
        return 0;
    }
    int j=1;
    Node* prev;
    Node* head2;
    while(curr!=NULL){
        if(j==i+1){
            prev=curr;
        }
        if(j==i+2){
            head2=curr;
        }
        
        curr=curr->next;
        j++;
    }
    reverseLL(head2,prev,i);
    j=0;
    Node* curr1=head;
    Node* curr2=head2;
    while(j<=i){
        if(curr1->data != curr2->data){
            return false;
        }
        curr1=curr1->next;
        curr2=curr2->next;
        j++;
    }
    return true;
}