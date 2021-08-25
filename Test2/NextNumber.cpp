/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node *reverse(Node *head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *nxt;

    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxt;
    }

    return prev;
}

Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    head = reverse(head);
    Node *curr = head;
    
    while(curr != NULL){
        
        if(curr -> next == NULL && curr -> data == 9){
            curr -> data = 1;
            Node *temp = new Node(0);
            temp -> next = head;
            head = temp;
            curr = curr-> next;
        }
        
        else if(curr -> data == 9){
            curr -> data = 0;
            curr  = curr -> next;
        }
        
        else{
            curr -> data = curr -> data + 1;
            curr = curr -> next;
            break;
        }
    }
    
    head = reverse(head);
    
    return head;
    
}


