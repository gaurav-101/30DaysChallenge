int findPairsWithGivenSum(DLLNode *head, int target)
{
    int ans=0;
    DLLNode *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    DLLNode *curr1=head;
    DLLNode *curr2=curr;
    while(curr1!=curr2){
        int sum=curr1->data+curr2->data;
        if(sum==target){
            ans++;
            curr1=curr1->next;
        }
        else if(sum>target){
            curr2=curr2->prev;
        }
        else{
            curr1=curr1->next;
        }
    }
    return ans;
}
int countTriplets(DLLNode* head, int x)
{
    int ans=0;
    DLLNode *curr=head;
    while(curr->next->next!=NULL){
        ans+=findPairsWithGivenSum(curr->next, x-curr->data);
        curr=curr->next;
    }
    return ans;
}  