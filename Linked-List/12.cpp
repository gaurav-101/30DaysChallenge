// Right Method
int intersectPoint(Node* head1, Node* head2)
{
    
    Node* curr1=head1;
    Node* curr2=head2;
    int length1=0,length2=0;
    while(curr1!=NULL){
        length1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL){
        length2++;
        curr2=curr2->next;
    }
    int diff;
    curr1=head1;
    curr2=head2;
    if(length1>length2){
        diff=length1-length2;
        while(diff!=0){
            curr1=curr1->next;
            diff--;
        }
    }
    else if(length1<length2){
        diff=length2-length1;
        while(diff!=0){
            curr2=curr2->next;
            diff--;
        }
    }
    
    while(curr2!=curr1){
        curr2=curr2->next;
        curr1=curr1->next;
    }
    return curr2->data;
}

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