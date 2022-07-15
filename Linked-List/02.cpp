struct node *reverse (struct node *head, int k)
{ 
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    struct node* next = NULL;
    struct node* curr = head;
    struct node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = reverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}