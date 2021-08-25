#include<stack>
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
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    
    if(root == NULL){
        return root;
    }
    
    queue<TreeNode<int>*> q;
    stack<TreeNode<int>*> st;
    
    q.push(root);
    int maxsum = 0;
    
    while(!q.empty()){
        
        int currsum = q.front() -> data;
        for(int i =0;i<root -> children.size();i++){
            q.push(root -> children[i]);
            currsum+= root -> children[i] -> data;
        }
        
        if(currsum > maxsum){
            maxsum = currsum;
            st.push(q.front());
        }
        
        q.pop();
        root = q.front();
    }
    
    return st.top();
    
}
