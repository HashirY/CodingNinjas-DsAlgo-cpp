#include<unordered_map>

int highestFrequency(int arr[], int n) {
    // Write your code here
    
    unordered_map<int , int> mp;
    for(int i=0;i<n;i++){
        
        int key = arr[i];
        if(mp.count(key) == 0){
            mp[key] = 1;
        }
        else{
            mp[key]++;
        }
    }
    
    int maxinMap = mp[arr[0]];
    int ans = arr[0];
    int j = 1;
    while(j < n){
        if(mp[arr[j]] > maxinMap){
            maxinMap = mp[arr[j]];
            ans = arr[j];
        }
        
        j++;
    }
    
    return ans;
    
}
