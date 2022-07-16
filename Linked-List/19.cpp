void deleteNode(struct Node **head, int key)
{
    Node *curr=*head;
    while(curr->next->data!=key){
        curr=curr->next;
    }
    curr->next=curr->next->next;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

    Node* prev=*head_ref;
    Node* curr=prev->next;
    Node* forward;
    while(curr!=*head_ref){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    curr->next=prev;
    
    *head_ref=prev;

}