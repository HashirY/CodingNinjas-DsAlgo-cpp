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

class Queue {
	// Define the data members
    
    Node *head , *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
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

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *newnode = new Node(data);
        
        if(size == 0){
            head = newnode;
            tail = newnode;
            size++;
        }
        
        else{
        
        tail -> next = newnode;
        tail = tail -> next;
        size++;
            
        }
	}

    int dequeue() {
        // Implement the dequeue() function
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

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }
        return head -> data;
    }
};
