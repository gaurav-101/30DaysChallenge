vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    vector<pair<int, int>> ans;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node *curr1=head;
    Node *curr2=curr;
    while(curr1!=curr2){
        int sum=curr1->data+curr2->data;
        if(sum==target){
            ans.push_back(make_pair(curr1->data,curr2->data));
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