#include<cmath>
#include<climits>

int helper(string s , string t , int **output){
    
    int m = s.size() , n = t.size();
    
    if (s.size() == 0 || t.size() == 0)
    {
        return max(s.size(), t.size());
    }
    
    if(output[m][n] != -1){
        return output[m][n];
    }
    
    int ans;
    if(s[0] == t[0]){
        
        ans = helper(s.substr(1) , t.substr(1) ,  output);
    }
    
    else{
        
        int a = helper(s.substr(1) , t , output) + 1;
        int b = helper(s , t.substr(1) ,output) + 1;
        int c = helper(s.substr(1) , t.substr(1) , output) + 1;
        
        ans = min(a , min(b , c));
    }
    
    output[m][n] = ans;
    
    return ans;
}

int editDistance(string s, string t)
{
	//Write your code here
    int m = s.size() , n = t.size();
    
    int **output = new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
        for(int j=0;j<=n;j++){
            output[i][j] = -1;
        }
    }
    
    return helper(s , t , output);
}
