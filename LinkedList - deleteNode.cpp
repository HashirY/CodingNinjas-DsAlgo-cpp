Node *deleteNode(Node *head, int i)
{
    // Write your code here.
    
    if(head == NULL){
        return head;
    }
    
    if(i==0){
        Node *temp=head->next;
        delete head;
        return temp;
    }
    int c=1;
    Node* q=head->next;
    Node* p=head;
    while(q!=NULL){
        if(c==i){
            p->next=q->next;
            delete q;
            return head;
        }
        p = p -> next;
        q=q->next;
        c++;
    }
    return head;
}
