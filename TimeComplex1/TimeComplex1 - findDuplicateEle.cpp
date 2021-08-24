int findDuplicate(int *arr, int n)
{
    //Write your code here
    
    int sum1 = 0 , sum2 = 0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        sum2 += i;
    }
    
    return sum1 - sum2;
}
