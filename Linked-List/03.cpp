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