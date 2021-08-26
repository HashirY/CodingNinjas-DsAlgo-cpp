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
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *front = q.front();
        cout<<front -> data<<":";
        q.pop();
        
        
        if(root -> left != NULL){
            cout<<"L:"<<root -> left -> data<<",";
            q.push(root -> left);
        }
        
        else{
            cout<<"L:"<<"-1"<<",";
        }
        
        if(root -> right != NULL){
            cout<<"R:"<<root -> right -> data;
            q.push(root -> right);
        }
        else{
            cout<<"R:"<<"-1";
        }
        
        cout<<endl;
        root = q.front();
    }
}
