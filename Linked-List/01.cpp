// Iterative way

struct Node* reverseList(struct Node *head)
{
    struct Node* prev=NULL;
    struct Node* curr=head;
    struct Node* forward;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
    
}

//Recursive way

struct Node* solve(struct Node *prev, struct Node *curr){
    if(curr==NULL){
        return prev;
    }
    struct Node *forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    solve(prev,curr);
}
struct Node* reverseList(struct Node *head)
{
    struct Node* prev=NULL;
    struct Node* curr=head;
    struct Node* forward;
    
    return solve(prev,curr);
}