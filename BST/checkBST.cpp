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

bool helper(BinaryTreeNode<int> *root , BinaryTreeNode<int> *min = NULL , BinaryTreeNode<int> *max = NULL){
    
    if(root == NULL){
        return true;
    }
    
    if(min != NULL && root -> data <= min -> data){
        return false;
    }
    
    if(max != NULL && root -> data >= max -> data){
        return false;
    }
    
    bool left = helper(root -> left , min , root);
    bool right = helper(root -> right , root , max);
    
    return left && right;
}

bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    
    return helper(root , NULL , NULL);
}
