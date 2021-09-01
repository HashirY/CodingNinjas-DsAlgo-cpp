#include<unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
    unordered_map<int,int> map;
    int ans=0;
    for(int i=0;i<n;i++){
        if(map[arr[i]])
            ans+=map[arr[i]];
        if(k!=0){
            map[arr[i]+k]++;
            map[arr[i]-k]++;
        }
        else
           map[arr[i]]++; 
    }
    return ans;
}
