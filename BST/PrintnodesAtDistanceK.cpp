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
void subtreenode(BinaryTreeNode<int> *root , int k){
    
    if(root == NULL || k < 0){
        return;
    }
    
    if(k == 0){
        cout<<root -> data<<endl;
        return;
    }
    
    subtreenode(root -> left , k-1);
    subtreenode(root -> right , k-1); 
}

int helper(BinaryTreeNode<int> *root , int node , int k){
    
    if(root == NULL){
        return -1;
    }
    
    if(root -> data == node){
        subtreenode(root , k);
        return 0;
    }
    
    int dl = helper(root -> left , node , k);
    
    if(dl != -1){
        
        if(dl + 1 == k){
            cout<<root -> data<<endl;
        }
        
        else{
            subtreenode(root -> right , k - dl - 2);
        }
        
        return 1 + dl;
    }
    
    int dr = helper(root -> right , node , k);
    
    if(dr != -1){
        
        if(dr + 1 == k){
            cout<<root -> data<<endl;
        }
        else{
            subtreenode(root -> left , k - dr - 2);
        }
        
        return 1 + dr;
    }
    
    return -1;
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code herez
	helper(root , node , k);
}
