#include<vector>
#include<queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    
    priority_queue<int> pq;
    
    for(int i =0;i<k;i++){
        pq.push(arr[i]);
    }
    
    for(int j = k;j<n;j++){
        
        if(pq.top() > arr[j]){
            pq.pop();
            pq.push(arr[j]);
        }
    }
    
    vector<int> ans;
    while(!pq.empty()){
        
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;
}
