vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    vector<int> ans;
    unordered_map<int,int> a;
    for(int i=0;i<n;i++)
    {
        a[arr[i]]=1;
    }
    int max=0;
    int k=0;
    
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        int j=0;
        if(a.count(x-1)>0)
            continue;
        while(a.count(x)>0 )
        {
                
            j++;
            x++;
        }
        if(j>max)
        {  
            max=j;
            k=arr[i];
        }   
    }
    
    for(int i=0;i<max;i++)
    {
        ans.push_back(k);
        k++;
    }
    return ans;
}
