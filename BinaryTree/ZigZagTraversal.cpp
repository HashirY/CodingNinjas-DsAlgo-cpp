#include<stack>
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

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    
    stack<int> st;
    queue<BinaryTreeNode<int>*> q;
    
    q.push(root);
    q.push(NULL);
    
    int level = 1;
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *x = q.front();
        q.pop();
        
        if(x != NULL){
            
            if(level % 2 == 1){
                cout<<x -> data<<" ";
            }
            else{
                st.push(x -> data);
            }
            
            if(x -> left){
                q.push(x -> left);
            }
            
            if(x -> right){
                q.push(x -> right);
            }
        }
        
        else if(!q.empty()){
            q.push(NULL);
            while(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
            level++;
            cout<<endl;
        }
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        // cout<<endl;
    }
}
