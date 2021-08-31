void heapSort(int arr[], int n) {
    // Write your code
    
    for(int i=1;i<n;i++){
        
        int childindex = i;
        
        while(childindex > 0){
            
            int parentindex = (childindex - 1)/2;
            
            if(arr[childindex] < arr[parentindex]){
                
                int temp = arr[childindex];
                arr[childindex] = arr[parentindex];
                arr[parentindex] = temp;
            }
            else{
                break;
            }
            
            childindex = parentindex;
        }
    }
    
    int size = n;
    while(size > 1){
        
        int temp = arr[0];
        arr[0] = arr[size -1];
        arr[size -1] = temp;
        
        size--;
        
        int parentindex = 0;
        int leftchild = 2 * parentindex + 1;
        int rightchild = 2 *parentindex + 2;
        
        while(leftchild < size){
            
            int minindex = parentindex;
            
            if(arr[minindex] > arr[leftchild]){
                minindex = leftchild;
            }
            
            if(rightchild < size && arr[minindex] > arr[rightchild]){
                minindex = rightchild;
            }
            
            if(minindex == parentindex){
                break;
            }
            
            int temp = arr[minindex];
            arr[minindex] = arr[parentindex];
            arr[parentindex] = temp;
            
            parentindex = minindex;
            leftchild = 2 * parentindex + 1;
        	rightchild = 2 *parentindex + 2;
            
        }
    }
}
