/* solved on GFG, refer the driver code there for the int main() code*/

//QUESTION 
/*  You are given a stack St. You have to reverse the stack using recursion.

Example 1:

Input:
St = {3,2,1,7,6}
Output:
{6,7,1,2,3}
*/


//my code
#include <queue>
#include <stack>
class Solution{
public:
    
    stack<int> reverse_stack(stack<int> &St, queue<int>&q){
       //stack<int>newSt;
       if(St.empty()){
           while(!q.empty()){
           St.push(q.front());
           q.pop();
           }
           return St;
       } 
       
       q.push(St.top());
       St.pop();
       reverse_stack(St,q);
       
       return St;
    }
    
    void Reverse(stack<int> &St){
      
      queue<int>q;
       reverse_stack(St, q);
      
    }
};
