class Solution {
public:
  void inorder(TreeNode* node, int& fid, int& k) {
    if (!node) return;
    inorder(node->left, fid, k);
    if (!k) return;
    fid = node->val;
    inorder(node->right, fid, --k);
}

int kthSmallest(TreeNode* root, int k) {
    int fid;
    inorder(root, fid, k);
    return fid;
}
};