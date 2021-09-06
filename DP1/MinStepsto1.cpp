#include<cmath>
#include<climits>
int countStepsToOne(int n)
{
	//Write your code here
    int *dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = 0;
    
    for(int i=2;i<=n;i++){
        
        int subtract1 = dp[i - 1];
        int divide2 = INT_MAX;
        int divide3 = INT_MAX;
        
        if(i % 2 == 0){
            divide2 = dp[i/2];
        }
        
        if(i % 3 == 0){
            divide3 = dp[i/3];
        }
        
        dp[i] = min(subtract1 , min(divide2 , divide3)) + 1;
    }
    
    int ans = dp[n];
    delete dp;
    
    return ans;
}

//--------------------------------------------------Recursive-------------------------------------------------------------------//
#include<cmath>
#include<climits>
int countMinStepsToOne(int n)
{
	//Write your code here
    if(n <=1){
        return 0;
    }
    
    int x = countMinStepsToOne(n - 1);
    
    int y = INT_MAX , z = INT_MAX;
    
    if(n % 2 == 0){
        
        y = countMinStepsToOne(n/2);
    }
    
    if(n % 3 == 0){
        
        z = countMinStepsToOne(n/3);
    }
    
    int ans = min(x , min(y , z)) + 1;
    
    return ans;
}
