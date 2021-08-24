#include <stack>

bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> st;
    int len = expression.size();
    
    bool ans = true;
    for(int i =0;i<len;i++){
        
        if(expression[i] == '('){
            st.push(expression[i]);
        }
        
        else if(expression[0] == ')'){
            ans = false;
            break;
        }
        
        else if(expression[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    
    if(!st.empty()){
        return false;
    }
    
    return ans;
}
