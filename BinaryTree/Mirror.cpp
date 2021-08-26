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

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root == NULL){
        return;
    }
    
    BinaryTreeNode<int> *p;
    mirrorBinaryTree(root -> left);
    mirrorBinaryTree(root -> right);
    
    p = root -> left;
    root -> left = root -> right;
    root -> right = p;
}
