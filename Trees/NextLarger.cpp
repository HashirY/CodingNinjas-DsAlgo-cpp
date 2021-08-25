/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

void getNextLargerElementUtil(TreeNode<int>*root , TreeNode<int> **res , int x){
    
    if(root == NULL){
        return;
    }
    
    if(root -> data > x){
        if((!*res) || (*res) -> data > root -> data){
            *res = root;
        }
    }
    
    for(int i =0;i<root-> children.size();i++){
        getNextLargerElementUtil(root -> children[i] , res , x);
    }
    
    // return;
}

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    
    TreeNode<int> *res = NULL;
    
    getNextLargerElementUtil(root , &res , x);
    
    return res;
}
