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
    
    for(int i =start;i<=end;i++){
        
        if(inorder[i] == curr){
            return i;
        }
    }
    
    return -1;
}

int idx = 0;
BinaryTreeNode<int> *buildTreeHelper(int *preorder , int *inorder , int start , int end){
    
    if(start > end){
        return NULL;
    }
    
    int curr = preorder[idx];
    idx++;
    
    BinaryTreeNode<int> *node = new BinaryTreeNode<int>(curr);
    
    if(start == end){
        return node;
    }
    
    int pos = search(inorder , start , end , curr);
    
    node -> left = buildTreeHelper(preorder , inorder , start , pos-1);
    node -> right = buildTreeHelper(preorder , inorder , pos+1 , end);
    
    return node;
    
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    
    return buildTreeHelper(preorder , inorder , 0 , inLength-1);
}
