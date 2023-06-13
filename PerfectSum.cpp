/*
Given an array arr[] of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.

Note: Answer can be very large, so, output answer modulo 109+7

Example 1:

Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
Output: 3
Explanation: {2, 3, 5}, {2, 8}, {10}
*/
//Solved using recursion, will require Dynamic Programming
//to clear the TLE 


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int m = 1000000007;
	int sumission(int arr[], int n, int sum, int i,int sumSeq){
	    //int sumSeq=0;
	    if(i==n){
	        if(sumSeq == sum){
	            return 1;
	        }else{
	            return 0;
	        }
	    }
	    
	    sumSeq+=arr[i];
	   int l= sumission(arr,n,sum,i+1,sumSeq);
	    sumSeq-=arr[i];
	   int r= sumission(arr,n,sum,i+1,sumSeq);
	    
	   return (l+r)%m;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
           return sumission(arr,  n, sum, 0,0); 
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends