/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/



class Solution {
public:
    void combination(int ind,int sum,vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&ds){
       
        if(sum>target){
            return;
        }
        
        if(sum==target){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
        if (i != ind && candidates[i] == candidates[i - 1])continue;
          //this resolves our duplicate sets problem       
        sum+=candidates[i];
        ds.push_back(candidates[i]);
        combination(i+1,sum,candidates,target,ans,ds);
        sum-=candidates[i];
        ds.pop_back();
        
       }  
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        combination(0,0,candidates,target,ans,ds);
        return ans;
    }
};