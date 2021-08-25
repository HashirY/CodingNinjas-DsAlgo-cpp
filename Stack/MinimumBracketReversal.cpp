#include <stack>

int countBracketReversals(string s) {
	// Write your code here
    
    if(s.length() % 2 != 0){
        return -1;
    }
    
    stack<int> st;
    for(int i  = 0;i<s.length();i++){
        
        if(s[i] == '}' && st.empty()){
            st.push(s[i]);
        }
        
        else if(s[i] == '}' && !st.empty() && st.top() == '{'){
            st.pop();
        }
        
        else if(s[i] == '}' && !st.empty() && st.top() != '{'){
            st.push(s[i]);
        }
        
        else {
            st.push(s[i]);
        }
    }

    
    int count = 0;
    while(!st.empty()){
        
        int c1 = st.top();
        st.pop();
        int c2 = st.top();
        st.pop();
        
        if(c1 == c2){
            count++;
        }
        
        else{
            count += 2;
        }
    }
    
    return count;
    
}
