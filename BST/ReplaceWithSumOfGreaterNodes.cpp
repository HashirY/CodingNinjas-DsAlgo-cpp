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

int helper(BinaryTreeNode<int> *root , int sum){
    
    if(root == NULL){
        return sum;
    }
    
    sum = helper(root -> right , sum);
    
    sum+= root -> data;
    root -> data = sum;
    
    sum = helper(root -> left , sum);
    
    return sum;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    int sum = 0;
    helper(root , sum);
}
