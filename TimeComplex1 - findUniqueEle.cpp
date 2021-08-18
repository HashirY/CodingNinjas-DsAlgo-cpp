int findUnique(int *arr, int n) {
    // Write your code here
    
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
