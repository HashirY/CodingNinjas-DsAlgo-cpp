int length(Node *head) {
    // Write your code here
    if(head == NULL){
        return 0;
    }
    
    else return 1 + length(head -> next);
}
