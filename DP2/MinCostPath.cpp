#include<climits>
#include<cmath>

int helper(int **input , int m , int n , int i , int j){
    
    if(i == m-1 && j == n-1){
        return input[i][j];
    }
    
    if(i>=m || j>=n){
        return INT_MAX;
    }
    
    int x = helper(input , m , n , i , j+1);
    int y = helper(input , m , n , i+1 , j+1);
    int z = helper(input , m , n , i+1 , j);
    
    int ans = min(x , min(y , z)) + input[i][j];
    
    return ans;
    
}

int minCostPath(int **input, int m, int n)
{
	//Write your code here
    return helper(input , m ,n , 0 , 0);
}
