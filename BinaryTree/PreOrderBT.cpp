/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void preOrder(BinaryTreeNode<int> *root) {
    
    if(root == NULL){
        return;
    }
	// Write your code here
    cout<<root -> data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}
