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
    int sumNumbers(TreeNode* root, int sum = 0) {
        if(root == nullptr) return 0;

        int x = sum * 10 + root->val;
        cout << x << endl;

        if(root->left == nullptr && root->right == nullptr) return x;

        int ans = sumNumbers(root->left, x) + sumNumbers(root->right, x);

        return ans;
    }
};