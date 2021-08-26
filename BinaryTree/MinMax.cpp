#include <climits>
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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    pair<int , int> p;
    
    p.first = INT_MAX; // minimum
    p.second = INT_MIN; // maximum
    
    if(root == NULL){
        return p;
    }
    
    pair<int , int> leftans = getMinAndMax(root -> left);
    pair<int , int> rightans = getMinAndMax(root -> right);
    
    
    p.first = min(min(leftans.first , rightans.first) , root -> data);
    p.second = max(max(leftans.second , rightans.second) , root -> data);
    
    return p;
    
}
