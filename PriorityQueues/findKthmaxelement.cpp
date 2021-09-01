#include<queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    
    priority_queue<int , vector<int> , greater<int>> pq;
    for(int i=0;i<k;i++){
     	pq.push(arr[i]);
    }
    
    for(int j=k;j<n;j++){
        
        if(pq.top() < arr[j]){
            pq.pop();
            pq.push(arr[j]);
        }
    }
    
    return pq.top();
}
