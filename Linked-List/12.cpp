//My Method(JUGAAD)
int intersectPoint(Node* head1, Node* head2)
{
    Node* curr1=head1;
    Node* curr2=head2;
    while(curr1!=NULL){
        curr1->data+=5000;
        curr1=curr1->next;
    }
    while(curr2->data<2000){
        curr2=curr2->next;
    }
    return curr2->data-5000;
}