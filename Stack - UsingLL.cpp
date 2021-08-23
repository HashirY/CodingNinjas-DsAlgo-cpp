/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/
// class Node{
    
//     public:
//     int data;
//     Node*next;
    
//     Node(int data){
//         this -> data = data;
//         next = NULL;
//     }
// };

class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size == 0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newnode = new Node(element);
        newnode -> next = head;
        head = newnode;
        size++;
    }

    int pop() {
        // Implement the pop() function
        if(isEmpty()){
            return -1;
        }
        
        int ans = head -> data;
        Node *temp = head;
        head = head -> next;
        delete temp;
        size--;
        
        return ans;
    }

    int top() {
        // Implement the top() function
        if(isEmpty()){
            return -1;
        }
        
        return head -> data;
    }
};
