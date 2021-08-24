int findNodeRecHelper(Node *head , int index , int n){
    
    if(head == NULL){
        return -1;
    }
    
    if(head -> data == n){
        return index;
    }
    
    int ans = findNodeRecHelper(head -> next , index + 1 , n);
    
    return ans;
}


int findNodeRec(Node *head, int n)
{
	//Write your code here
    return findNodeRecHelper(head , 0 , n);
}
