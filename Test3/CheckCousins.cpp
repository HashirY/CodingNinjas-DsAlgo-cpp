// Following is the Binary Tree node structure
/**************
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
***************/

int level(BinaryTreeNode<int> *root , int node){
    
    if(root == NULL){
        return -1;
    }
    
    if(root -> data == node){
        return 0;
    }
    
    int left = level(root -> left , node);
    
    if(left != -1){
        return left + 1;
    }
    
    else {
        int right = level(root -> right , node);
        
        if(right != -1){
            return right + 1;
        }
        
        else{
            return -1;
        }
    }
}

bool isSibling(BinaryTreeNode<int> *root , int p , int q){
    
    if(root == NULL){
        return false;
    }
    
    if(root -> left != NULL && root -> right != NULL){
        if(root -> left -> data == p && root -> right -> data == q){
            return true;
        }
        else if(root -> left -> data == q && root -> right -> data == p){
            return true;
        }
        
        else{
            return (isSibling(root -> left , p , q) || isSibling(root -> right , p , q));
        }
    }
    
    if(root -> right != NULL){
        return isSibling(root -> right , p , q);
    }
    else{
        return isSibling(root -> left , p , q);
    }
}

bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
    
    if(root == NULL){
        return false;
	}
    
    return((level(root , p) == level(root , q)) && (!isSibling(root , p , q)));

}
