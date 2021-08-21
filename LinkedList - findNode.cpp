int findNode(Node *head, int n){
    // Write your code here.
    
    if(head == NULL){
        return -1;
    }
    Node *temp = head;
    int count = 0;
    while(temp != NULL && temp -> data != n){
        
        count++;
        temp = temp -> next;
        
    }
    if(temp != NULL){
        return count;
    }
    
    return -1;
}
