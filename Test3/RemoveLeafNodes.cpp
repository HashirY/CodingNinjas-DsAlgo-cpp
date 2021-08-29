// Following is the given Tree node structure.
/**************
class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
    void removeChild(int index);
 
};
***************/
#include<vector>

TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL||root->numChildren()==0)
    return NULL;
    
    vector<int> indexes;
   
    for(int i=0;i<root->numChildren();i++)
    {
        TreeNode<int>* child=root->getChild(i);
        if(child->numChildren()==0)
            indexes.push_back(i);
        
    }
    
    for(int i=indexes.size()-1;i>=0;i--)
     {
    int j=indexes[i];
    root->removeChild(j);
    }
     for(int i=0;i<root->numChildren();i++)
    {
        TreeNode<int>* child=removeLeafNodes(root->getChild(i));
        if(child==NULL)
           root->removeChild(i);
         
        
    }
    return root;

}

