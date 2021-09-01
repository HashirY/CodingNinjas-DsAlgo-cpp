bool isMaxHeap(int arr[], int n) {
    // Write your code here
    
    for(int i=1;i<n;i++){
        int parent = (i - 1)/2;
        
        if(arr[parent] < arr[i]){
            return false;
        }
    }
}
