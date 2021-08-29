#include<bits/stdc++.h>
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

// int k = 0;

void convert(BinaryTreeNode<int> *root , vector<int> &arr){
    
    if(root == NULL){
        return;
    }
    
    arr.push_back(root -> data);
    
    convert(root -> left , arr);
    convert(root -> right , arr);
}

void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    vector<int> output;
    
    convert(root , output);
    sort(output.begin() , output.end());
    
    int i = 0;
    int j = output.size() - 1;
    
    while(i<j){
        
        if(output[i] + output[j] == sum){
            cout<<output[i]<<" "<<output[j]<<endl;
            i++;
            j--;
        }
        
        else if(output[i] + output[j] > sum){
            j--;
        }
        else{
            i++;
        }
    }
}
