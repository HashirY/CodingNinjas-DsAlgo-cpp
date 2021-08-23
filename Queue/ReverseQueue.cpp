#include <queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    
    if(input.size() <= 0){
        return;
    }
    int x;
    
    
    x = input.front();
    input.pop();
    reverseQueue(input);
    
    input.push(x);
    
}
