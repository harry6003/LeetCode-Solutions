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
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL)
            return 0;
        
        vector <int> v;
        
        queue <TreeNode* > q;
        q.push(root);
        
        while(q.size())
        {
            TreeNode * front = q.front();
            q.pop();
            
            v.push_back(front->val);
            
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
        
        sort(v.begin(),v.end());
        return v[k-1];
    }
};