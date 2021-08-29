#include<climits>
#include<cmath>

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



 struct info{
    
    int size;
    int max;
    int min;
    int ans;
    bool isBst;
};

info largestBSTinBT(BinaryTreeNode<int> *root)
{

    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    info leftinfo = largestBSTinBT(root->left);
    info rightinfo = largestBSTinBT(root->right);

    info curr;
    curr.size = max(leftinfo.size , rightinfo.size) + 1;

    if (leftinfo.isBst && rightinfo.isBst && root->data > leftinfo.max && root->data < rightinfo.min)
    {

        curr.min = min(leftinfo.min, min(rightinfo.min, root->data));
        curr.max = max(rightinfo.max, max(leftinfo.max, root->data));

        curr.ans = curr.size;
        curr.isBst = true;

        return curr;
    }

    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isBst = false;

    return curr;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    return largestBSTinBT(root).ans;
}
