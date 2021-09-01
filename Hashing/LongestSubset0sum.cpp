#include<unordered_map>

int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    
     unordered_map<int,int> m;

    
    int length=0;
    int sum=0;
    
     for(int i=0 ;i<n;i++)
    {
        sum+=arr[i];
        
        if(arr[i]==0 && length ==0)
            length =1;
        
        if(sum==0)
            length= i+1;
        
		if(m.find(sum) != m.end())
        {
            length=max(length,i-m[sum]);
        }
        else
        {
            m[sum]=i;
        }
    }
    
    return length;
}
