#include<unordered_map>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    
    unordered_map<int , int> mp;
    
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
    }
    
    for(int j=0;j<m;j++){
        if(mp[arr2[j]] > 0){
            mp[arr2[j]]--;
            cout<<arr2[j]<<endl;
        }
    }
}
