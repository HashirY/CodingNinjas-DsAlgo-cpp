#include<vector>
#include<queue>

vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    priority_queue<int , vector<int> , greater<int>> pq;
    
    for(int i =0;i<k;i++){
        pq.push(input[i]);
    }
    
    for(int j = k;j<n;j++){
        
        if(pq.top() < input[j]){
            pq.pop();
            pq.push(input[j]);
        }
    }
    
    vector<int> ans;
    
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;

}
