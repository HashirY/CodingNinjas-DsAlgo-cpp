#include <vector>
#include<algorithm>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
        if(isEmpty()){
            return 0;
        }
        
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        
        int parentindex = 0;
        int left = 2 * parentindex + 1;
        int right = 2 * parentindex + 2;
        
        while(left < pq.size()){
        	int minindex = parentindex;
        	if(pq[minindex] > pq[left]){
                minindex = left;
            }
            
            if(right < pq.size() && pq[minindex] > pq[right]){
                minindex = right;
            }
            
            if(minindex == parentindex){
                break;
            }
            
            int temp = pq[minindex];
            pq[minindex] = pq[parentindex];
            pq[parentindex] = temp;
            
            parentindex = minindex;
            left = 2 * parentindex + 1;
            right = 2 * parentindex + 2;
            
        }
        
        return ans;
    }
};
