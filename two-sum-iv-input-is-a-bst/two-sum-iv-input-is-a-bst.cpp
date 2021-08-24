class BSTIterator {
    stack<TreeNode*> s;
    TreeNode* node;
    bool forward;
    int cur;
public:
    BSTIterator(TreeNode *root, bool forward) : node(root), forward(forward) { (*this)++; };
    int operator*() { return cur; }
    void operator++(int) {
        while (node || !s.empty()) {
            if (node) {
                s.push(node);
                node = forward ? node->left : node->right;
            }
            else {
                node = s.top();
                s.pop();
                cur = node->val;
                node = forward ? node->right : node->left;
                break;
            }
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        BSTIterator l(root, true);
        BSTIterator r(root, false);
        while (*l < *r) {
            if (*l + *r == k) return true;
            else if (*l + *r < k) l++;
            else r++;
        }
        return false;
    }
};