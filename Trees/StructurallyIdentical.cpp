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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    
    if(root1 -> children.size() != root2 -> children.size()){
        return false;
    }
    
    else{
        if(root1 -> data == root2 -> data){
            
            bool ans = true;
            for(int i  =0;i<root1 -> children.size();i++){
                for(int j = 0;j<root2 -> children.size();j++){
                    
                	 ans = areIdentical(root1 -> children[i] , root2 -> children[j]);
                }
            }
            
            if(ans == true){
                return true;
            }
        }
        
        return false;
        
        
    }
    
}
