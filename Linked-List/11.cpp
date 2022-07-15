Node* findIntersection(Node* head1, Node* head2)
{
     Node* ansHead;
     Node* temp1=head1;
     Node* temp2=head2;
     while(temp1!=NULL and temp2!=NULL){
         if(temp1->data==temp2->data){
             ansHead = new Node(temp1->data);
             temp2=temp2->next;
             temp1=temp1->next;
             break;
         }
         else if(temp1->data>temp2->data){
             temp2=temp2->next;
         }
         else{
             temp1=temp1->next;
         }
     }
     Node* ansTail = ansHead;
     
     while(temp1!=NULL and temp2!=NULL){
         if(temp1->data==temp2->data){
             ansTail->next = new Node(temp1->data);
             ansTail=ansTail->next;
             temp2=temp2->next;
             temp1=temp1->next;
            
         }
         else if(temp1->data>temp2->data){
             temp2=temp2->next;
         }
         else{
             temp1=temp1->next;
         }
     }
     return ansHead;
}