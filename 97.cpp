/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode * root) {
        // write your code here
        if(root == nullptr) return 0;
        int leftMaxDepth = maxDepth(root->left);
        int rightMaxDepth = maxDepth(root->right);
        return max(leftMaxDepth, rightMaxDepth) + 1;
    }
};
