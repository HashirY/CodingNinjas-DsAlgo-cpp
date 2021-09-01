#include<unordered_set>

string uniqueChar(string str) {
	// Write your code here
    unordered_set<char> charset;
	string res;
    
    for(char ch : str){
        
        if(charset.find(ch) == charset.end()){
            res.push_back(ch);
            charset.insert(ch);
        }
    }
    
    return res;
}
