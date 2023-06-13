
/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/



class Solution {
public:

   void func(int index,vector<int>ds,vector<int>&nums,vector<vector<int>>&result){

       if(index==nums.size()){
           
          result.push_back(ds);
           return;    
       }
       ds.push_back(nums[index]);
       func(index+1,ds,nums,result);
       ds.pop_back();
       func(index+1,ds,nums,result);
   }

    
    vector<vector<int>> subsets(vector<int>& nums) {
       // int i=0;
       vector<vector<int>>result;
       vector<int>output;
        vector<int>ds;

        
        func(0,ds,nums,result);
        
        
        return result;
    }
};