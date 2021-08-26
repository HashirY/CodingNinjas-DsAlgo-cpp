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

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    
    if(root == NULL){
        return NULL;
    }
    
    if(root -> left == NULL && root -> right == NULL){
        free(root);
        return NULL;
    }
    else{
        root -> left = removeLeafNodes(root -> left);
        root -> right = removeLeafNodes(root -> right);
        
    }
    
    return root;
}
