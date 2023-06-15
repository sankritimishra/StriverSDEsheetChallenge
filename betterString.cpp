/*
Given a pair of strings, Geek wants to find the better string. The better string is the string having more number of distinct subsequences.

If both the strings have equal count of distinct subsequence then return str1.

Example 1:

Input:
str1 = "gfg", str2 = "ggg"
Output: "gfg"
Explanation: "gfg" have 7 distinct subsequences whereas "ggg" have 4 distinct subsequences. 
Example 2:

Input: str1 = "a", str2 = "b"
Output: "a"
Explanation: Both the strings have only 1 distinct subsequence. 
Constraints:
1 <= str1.lenght , str2.length <= 30

Your Task:
You don't need to read input or print anything. Your task is to complete the function betterString() which takes str1 and str2 as input parameters and returns the better string.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

*/


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
        set<int>st;
    int countSubsequence(string str, int index ,string s){
        
        if(index==str.size()){
          for(auto i:s){     
           st.insert(i);
          }
          return st.size();
        }
        
        s+=str[index];
        countSubsequence(str,  index +1, s);
        s.pop_back();
        countSubsequence(str,  index+1 , s);
        
        
    }
    string betterString(string str1, string str2) {
        // code here
        
        string s;
        int a=countSubsequence(str1,  0, s);
        int b=countSubsequence(str2,  0, s);
        
        if(a>=b){
            return str1;
        }else{
            return str2;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends