Node *evenAfterOdd(Node *head)
{
	//write your code here
    Node *oh = NULL;
    Node *ot = NULL;
    Node *eh = NULL;
    Node *et = NULL;
    
    while(head != NULL){
        if(head -> data % 2 == 0){
            if(eh == NULL && et == NULL){
                eh = head;
                et = head;
            }
            else{
                et -> next = head;
                et = head;
            }
            head = head -> next;
        }
        else{
            if(oh == NULL && ot == NULL){
                oh = head;
                ot = head;
            }
            else{
                ot -> next = head;
                ot = head;
            }
            head = head -> next;
        }
    }
    
    if(oh != NULL){
        ot -> next = eh;
    }
    else{
        return eh;
    }
    
    if(eh != NULL){
        et -> next = NULL;
    }
    
        return oh;
    
}
