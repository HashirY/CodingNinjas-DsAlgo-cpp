void printIthNode(Node *head, int i)
{
    //Write your code here
    Node *temp = head;
    int count = 0;
    
    while(temp != NULL){
        if(count == i){
            cout<<temp -> data<<endl;
        }
        count++;
        temp = temp -> next;
    }
}
