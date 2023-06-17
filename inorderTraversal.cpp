/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 
*/


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        
        TreeNode* temp=root;
        while(true){

            if(temp!=NULL){
                st.push(temp);
                temp=temp->left;
            }else{
               if(st.empty()==true){
                   break;
               }
               temp=st.top();
               st.pop();
               v.push_back(temp->val);
               temp=temp->right;
            }
        }
        return v;
    }
};