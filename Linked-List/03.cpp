//without using extra space
bool detectLoop(Node* head)
{
    Node* high=head;
    Node* low=head;
    while(high!=NULL and high->next != NULL){
        high=high->next->next;
        low=low->next;
        if(high==low){
            return true;
        }
    }
    return false;
}

// Using map and linear iterate
bool detectLoop(Node* head)
{
    map<Node*, int> m;
    Node* temp= head;
    while(temp!=NULL){
        if(!m[temp]){
            m[temp]=1;
            temp=temp->next;
        }
        else
            return true;
    }
    return false;
}