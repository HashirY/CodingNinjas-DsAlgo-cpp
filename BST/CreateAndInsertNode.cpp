/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    
    if(root == NULL){
        return;
    }
    
    BinaryTreeNode<int> *newnode = new BinaryTreeNode<int>(root -> data);
    
    if(root -> left == NULL){
        
        root -> left = newnode;
    }
    
    else if(root -> left != NULL){
        
        BinaryTreeNode<int> *temp = root -> left;
        // BinaryTreeNode<int> *newnode = new BinaryTreeNode<int>(root -> data);
        root -> left = newnode;
        newnode -> left = temp;
    }
    
    insertDuplicateNode(newnode -> left);
    insertDuplicateNode( root-> right);
    
}
