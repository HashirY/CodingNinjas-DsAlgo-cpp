void print(Node *head){
    
    Node *ptr = head;
    
    while(ptr != NULL){
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
}

void printReverse(Node *head)
{
    //Write your code here
    
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt;
    
    while(curr != NULL){
        nxt = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr = nxt;
    }
    
    Node *newhead = prev;
    print(newhead);
}
