/*
Given the root of a binary tree, return the preorder traversal of its nodes' values.
*/


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
         if(root==NULL)return preorder;

         stack<TreeNode*>st;
         st.push(root);

         while(!st.empty()){
             TreeNode* temp=st.top();
             st.pop();

             preorder.push_back(temp->val);

            if(temp->right!=NULL){
                 st.push(temp->right);
             }

            if(temp->left!=NULL){
                 st.push(temp->left);
             }

             

         }
         return preorder;
        
    }
};