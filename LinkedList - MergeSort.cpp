Node *midPoint(Node *head){
    
    Node *slow = head;
    Node *fast = head;
    
    while(fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    return slow;
}

Node *merge(Node *head1 , Node *head2){
    
    if(head1 == NULL){
        return head2;
    }
    
    if(head2 == NULL){
        return head1;
    }
    
    Node *t1 = head1;
    Node *t2 = head2;
    Node *head = NULL;
    Node *tail = NULL;
    
    if(t1 -> data <= t2 -> data){
        head = t1;
        tail = t1;
        t1 = t1 -> next;
    }
    
    else{
        head = t2;
        tail = t2;
        t2 = t2 -> next;
    }
    
    while(t1 != NULL && t2 != NULL){
        if(t1 -> data <= t2 ->data){
            tail -> next = t1;
            tail = tail -> next;
            t1 = t1 -> next;
        }
        else{
            tail -> next = t2;
            tail = tail -> next;
            t2 = t2 -> next;
        }
    }
    
    if(t1 == NULL){
        tail -> next = t2;
    }
    if(t2 == NULL){
        tail -> next = t1;
    }
    
    return head;
}

Node *mergeSort(Node *head)
{
	//Write your code here
    if(head == NULL){
        return head;
    }
    
    if(head -> next == NULL){
        return head;
    }
    
    Node *firsthead = midPoint(head);
    Node *sechead = firsthead -> next;
    firsthead -> next = NULL;
    
    Node *left = mergeSort(head);
    Node *right = mergeSort(sechead);
    
    Node *ans = merge(left , right);
    
    return ans;
}
