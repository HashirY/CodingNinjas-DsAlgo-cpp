/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    vector<Node<int>*> ans;
    
    Node<int>* currhead = NULL;
    Node<int>* currtail = NULL;
    
     // int currlevel = 1;
     // int nextlevelcount = 0;
    
    while(!q.empty()){
        
        BinaryTreeNode<int>*front = q.front();
        q.pop();
        
        if(front == NULL){
            break;
        }
        
        Node <int> *newnode = new Node<int>(front -> data);
    
    			        
            if(currhead == NULL){
                currhead = newnode;
                currtail = newnode;
            }
            else{
                currtail -> next = newnode;
                currtail = newnode;
            }
            
            if(front -> left){
                q.push(front -> left);
                // nextlevelcount++;
            }
            
            if(front -> right){
                q.push(front -> right);
                // nextlevelcount++;
            }
        
        	// currlevel--;
        
        if(q.front() == NULL){
            ans.push_back(currhead);
            q.pop();
            q.push(NULL);
            currhead = NULL;
            currtail = NULL;
        }
        
        
        
    }
    
    return ans;
}
