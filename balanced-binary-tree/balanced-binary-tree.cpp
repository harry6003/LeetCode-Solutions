/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode * root)
    {
      if(root==NULL)
        return 1;
      
      return 1 + max(height(root->left),height(root->right));
    }
  
    bool isBalanced(TreeNode* root) {
      
      if(root==NULL)
        return true;
      
      if(root->left == NULL && root->right == NULL)
        return true;
      
      bool op1 = false;
      if(abs(height(root->left) - height(root->right) ) <= 1)
        op1 = true;
      
      if(op1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
      
      return false;
      
    }
};