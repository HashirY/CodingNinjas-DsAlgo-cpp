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

void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    
    if(root == NULL){
        return;
    }
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        
        if(front != NULL){
            cout<<front -> data<<" ";
        
            if(front -> left){
            q.push(front -> left);
        }
        
        
            if(front -> right){
            q.push(front -> right);
        
            }
        }
        
        else if(!q.empty()){
            q.push(NULL);
    cout<<endl;
            
        }
        
    }
    
}
