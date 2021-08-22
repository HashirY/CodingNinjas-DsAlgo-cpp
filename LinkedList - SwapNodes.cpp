Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    
    if(i == j){
        return head;
    }
    
    Node *currnode = head , *prev = NULL;
    Node *firstnode = NULL , *secondnode = NULL , *firstnodeprev = NULL , *secondnodeprev = NULL;
    
    int pos = 0;
    while(currnode != NULL){
        
        if(pos == i){
            firstnodeprev = prev;
            firstnode = currnode;
        }
        
        else if(pos == j){
            secondnodeprev = prev;
            secondnode = currnode;
        }
        prev = currnode;
        currnode = currnode -> next;
        pos++;
    }
    
    if(firstnodeprev != NULL){
        firstnodeprev -> next = secondnode;
    }
    else{
        head = secondnode;
    }
    
    if(secondnodeprev != NULL){
        secondnodeprev -> next = firstnode;
    }
    else{
        head = firstnode;
    }
    
    Node *temp = secondnode -> next;
    secondnode -> next = firstnode -> next;
    firstnode -> next = temp;
    
    return head;
    
}
