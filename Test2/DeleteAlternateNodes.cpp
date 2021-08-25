
/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head == NULL){
        return;
    }
    
    Node *prev = head;
    Node *curr = head -> next;
    
    while(prev != NULL && curr != NULL){
        
        prev -> next = curr -> next;
        
        free(curr);
        prev = prev -> next;
        
        if(prev != NULL){
            curr = prev -> next;
        }
    }
    
}
