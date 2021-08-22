Node *kReverse(Node *head, int k)
{
	//Write your code here
    
	if(head == NULL || k == 0){
        return head;
    }
    
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt;
    
    int count = 1;
    while(curr != NULL && count <= k){
        
        nxt = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr = nxt;
        
        count++;
    }
    
    if(nxt != NULL){
        head -> next = kReverse(nxt , k);
    }
    
    return prev;
}
