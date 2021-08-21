Node *reverse(Node *head){
    
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt = NULL;
    
    while(curr != NULL){
        nxt = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr = nxt;
    }
    
    return prev;
    
}


bool isPalindrome(Node *head)
{
    //Write your code here
    
    if(head == NULL || head -> next == NULL){
        return true;
    }
    
    Node *slow = head;
    Node *fast = head;
    
    while(fast -> next != NULL && fast -> next -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    
    Node *sechead = slow -> next;
    slow -> next = NULL;
    
    sechead = reverse(sechead);
    
    Node *firstL = head;
    Node *secL = sechead;
    
    
    bool ans = true;
    while(secL != NULL){
        if(firstL -> data != secL -> data){
            ans = false;
            break;
        }
        
        firstL = firstL -> next;
        secL = secL -> next;    
    }
    
    return ans;
    
}
