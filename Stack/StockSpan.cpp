#include <stack>
int* stockSpan(int *price, int size)  {
	// Write your code here
    
    int *output = new int[size];
     stack<int> s;
    
    output[0]=1;
    s.push(0);
	for(int i=1;i<size;i++)
    {
        if(price[i]<= price[s.top()])
        {
            s.push(i);
            output[i]=1;
        }
        else
        {  
            while(s.top()!=NULL && price[i]>price[s.top()])
              { 
                  s.pop();
               
              }
            if(s.top()==NULL)
                output[i]=i+1;
            else
                output[i]=i-s.top();
            
            s.push(i);
        }
        
      }
    // for(int i=0;i<size;i++)
    // {
    //     price[i]=output[i];
    // }
return output;
}
