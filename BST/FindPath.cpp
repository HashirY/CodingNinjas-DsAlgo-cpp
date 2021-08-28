/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == data)
    {
        vector<int> *output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    if (data > root->data)
    {

        vector<int> *rightans = getPath(root->right, data);

        if (rightans != NULL)
        {
            rightans->push_back(root->data);
            return rightans;
        }
    }

    vector<int> *leftans = getPath(root->left, data);

    if (leftans != NULL)
    {
        leftans->push_back(root->data);
    }

    return leftans;
}
