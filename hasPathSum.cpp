class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        // If it's a leaf node, check if its value equals the remaining sum
        if (root->left == nullptr && root->right == nullptr) {
            return (root->val == targetSum);
        }
        // Otherwise, subtract current node's value and recurse
        int remaining = targetSum - root->val;
        return hasPathSum(root->left, remaining) || hasPathSum(root->right, remaining);
    }
};
