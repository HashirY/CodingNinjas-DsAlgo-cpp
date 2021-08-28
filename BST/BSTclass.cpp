/**********************************************************

	Following is the Binary Tree Node class structure

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
	
***********************************************************/

class BST {
    // Define the data members
    BinaryTreeNode<int> *root;
   public:
    BST() { 
        // Implement the Constructor
        root = NULL;
    }
    
    // // ~BST(){
    //     delete root;
    // }

	/*----------------- Public Functions of BST -----------------*/

    private:
    BinaryTreeNode<int> *deleteData(int data , BinaryTreeNode<int> *node){
        if(node == NULL){
            return NULL;
        }
        if(data > node -> data){
            deleteData(data , node -> right);
        }
        else if(data < node -> data){
            deleteData(data , node -> left);
        }
        else{
            if(node -> left == NULL && node -> right == NULL){
                delete node;
                return NULL;
            }
            else if(node -> left == NULL){
                BinaryTreeNode<int> *temp = node -> right;
                node -> right = NULL;
                delete node;
                return temp;
            }
            else if(node -> right == NULL){
                BinaryTreeNode<int> *temp = node -> left;
                node -> right = NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int> *minnode = node -> right;
                while(minnode -> left){
                    minnode = minnode -> left;
                }
                
                int rightmin = minnode -> data;
                node -> data = rightmin;
                node -> right = deleteData(rightmin , node -> right);
                return node;
            }
        }
    }
    
    public:
    void remove(int data) { 
        // Implement the remove() function 
        root = deleteData(data , root);
    }

    // private:
    void printTree(BinaryTreeNode<int>* root) {
		if (root == NULL) {
			return;
		}
		cout << root->data << ":";
		if (root->left != NULL) {
			cout << "L:" << root->left->data<<",";
		}

		if (root->right != NULL) {
			cout << "R:" << root->right->data;
		}
		cout << endl;
		printTree(root->left);
		printTree(root->right);
	}
    
    
    public:
    void print() { 
        // Implement the print() function
        printTree(root);
    }

    private:
    
    BinaryTreeNode<int> *insert(int data , BinaryTreeNode<int> *node){
        
        if (node == NULL) {
			BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
			return newNode;
		}

		if (data <= node->data) {
			node->left = insert(data, node->left);
		} else {
			node->right = insert(data, node->right);
		}
		return node;
    }
    
    public:
    void insert(int data) { 
        // Implement the insert() function 
        this -> root = insert(data , this -> root);
    }
    
    private:
    bool hasData(int data , BinaryTreeNode<int> *node){
        
        if(node == NULL){
            return false;
        }
        
        if(node -> data == data){
            return true;
        }
        
        else if(node -> data >= data){
            return hasData(data , node -> left);
        }
        else{
            return hasData(data , node -> right);
        }
        
    }
    
	public:
    bool search(int data) {
		// Implement the search() function 
        return hasData(data , root);
    }
};
