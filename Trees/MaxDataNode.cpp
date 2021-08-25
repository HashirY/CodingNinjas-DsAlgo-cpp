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

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    
    if(root == NULL){
        return root;
    }
    
    TreeNode<int> *max = root;
    
    for(int i =0;i<root -> children.size();i++){
        
        TreeNode<int> *smallans = maxDataNode(root -> children[i]);
        
        if(root -> data < smallans -> data){
            max = smallans;
        }
    }
    
    return max;
}
