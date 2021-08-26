/***********************************************************
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

int search(int *inorder , int start , int end , int curr){
    
    for(int i=start;i<=end;i++){
        
        if(inorder[i] == curr){
            return i;
        }
    }
    
    return -1;
}

BinaryTreeNode<int> *helper(int *postorder , int*inorder , int start , int end , int *idx){
    
    if(start > end){
        return NULL;
    }
    
    int curr = postorder[*idx];
    (*idx)--;
    
    BinaryTreeNode<int> *node = new BinaryTreeNode<int>(curr);
    
    if(start == end){
        return node;
    }
    
    int pos = search(inorder , start , end , curr);
    
    node -> right = helper(postorder , inorder , pos+1 , end , idx);
    node -> left = helper(postorder , inorder , start , pos-1 , idx);
    
    return node;
    
}

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    
    int idx = inLength - 1;
    
    return helper(postorder , inorder , 0 , inLength-1 , &idx);
}
