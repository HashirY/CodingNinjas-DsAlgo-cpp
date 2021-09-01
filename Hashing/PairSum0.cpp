#include<unordered_map>

int pairSum(int *arr, int n) {
	// Write your code here
    
    int cnt = 0;
    unordered_map<int , int> mp;
    
    for(int i=0;i<n;i++){
        
        int negative = -arr[i];
        
        if(mp.find(negative) != mp.end()){
            cnt+= mp[negative];
        }
        
        mp[arr[i]]++;
    }
    
    return cnt;
}
