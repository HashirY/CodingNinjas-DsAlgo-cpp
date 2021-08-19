int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int index = 0;
    
    for(int i =1;i<size;i++){
        
        if(input[i] < input[i-1]){
            index = i;
        }
    }
    
    return index;
}
