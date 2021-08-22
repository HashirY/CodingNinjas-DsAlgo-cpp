Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head == NULL){
        return head;
    }
    
    if(M == 0){
        return NULL;
    }
    if(N == 0){
        return head;
    }
    
    Node *temp1 = head , *temp2;
    
    int count;
    
    while(temp1 != NULL){
        for(count=1;count<M && temp1 != NULL;count++){
            temp1 = temp1 -> next;
        }
        if(temp1 == NULL){
            return head;
        }
        
        temp2 = temp1 -> next;
        
        for(count = 1;count<=N && temp2 != NULL ;count++){
            
            Node *temp = temp2;
            temp2 = temp2 -> next;
            free(temp);
        }
        
        
        temp1 -> next = temp2;
        temp1 = temp2;
        
    }
        
    return head;
    
}
