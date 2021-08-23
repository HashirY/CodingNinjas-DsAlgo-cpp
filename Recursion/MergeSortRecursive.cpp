void merge(int input[] , int left , int mid , int right){
    
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *leftarr = new int[n1];
    int *rightarr = new int[n2];
    
    for(int i=0;i<n1;i++){
        leftarr[i] = input[left + i];
    }
    
    for(int j=0;j<n2;j++){
        rightarr[j] = input[mid + 1 + j];
    }
    
    int i = 0 , j = 0 , k = left;
    
    while(i < n1 && j < n2){
        if(leftarr[i] <= rightarr[j]){
            input[k] = leftarr[i];
            i++;
        }
        else{
            input[k] = rightarr[j];
            j++;
        }
        k++;
    }
    
    while(i < n1){
        input[k] = leftarr[i];
        i++;
        k++;
    }
    while(j < n2){
        input[k] = rightarr[j];
        j++;
        k++;
    }
    
}

void mergeSortHelper(int input[] , int begin , int end){
    
    if(begin >= end || begin == end){
        return;
    }
    
    int mid = begin + (end - begin) / 2;
    mergeSortHelper(input , begin , mid);
    mergeSortHelper(input , mid+1 , end);
    merge(input , begin , mid, end);
    
}


void mergeSort(int input[], int size){
	// Write your code here
    mergeSortHelper(input , 0 , size-1);
        
}
