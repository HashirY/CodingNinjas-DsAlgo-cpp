int length(Node *head){
    
    
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

Node *appendLastNToFirst(Node *head, int n)
{
    int l = length(head);
    if(n == 0){
        return head;
    }
    
    if(n > l){
        return head;
    }
    //Write your code here
    Node *newhead;
    Node *newtail;
    
    Node *tail = head;
    
     n = n%l;
    int count = 1;
    
    while(tail -> next != NULL){
        
        if(count == l - n){
            newtail = tail;
        }
        
        if(count == l - n + 1){
            newhead = tail;
        }
        
        tail = tail -> next;
        count++;
    }
    
    newtail -> next = NULL;
    tail -> next = head;
    
    return newhead;
}
