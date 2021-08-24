int length(Node *head)
{
    //Write your code here
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}
