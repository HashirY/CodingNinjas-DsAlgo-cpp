Node *removeDuplicates(Node *head)
{
    //Write your code here
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node *t1 = head;
    Node *t2 = head -> next;
    
    while(t2 != NULL){
        if(t1 -> data == t2 -> data){
            t2  = t2 -> next;
        }
        else{
            t1 -> next = t2;
            t1 = t2;
        }
    }
    
    t1 -> next = NULL;
    return head;
    
}
