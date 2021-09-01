#include<queue>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    queue<int> q;
    priority_queue<int> pq;
    
    for(int i =0;i<n;i++){
        
        q.push(arr[i]);
        pq.push(arr[i]);
    }
    
    int time = 0;
    while(!pq.empty()){
        
        if(pq.top() == q.front()){
            if(k == 0){
                return time + 1;
            }
            
            else{
                time++;
                q.pop();
                pq.pop();
                k--;
            }
        }
        
        else{
            
            q.push(q.front());
            q.pop();
            if(k == 0){
                k = q.size() - 1;
            }
            
            else{
                k--;
            }
        }
    }
    
    return time;
}
