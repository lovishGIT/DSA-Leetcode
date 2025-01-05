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
    int findHeight(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        return 1 + max(findHeight(root->left), findHeight(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) {
            return true;
        }
        int HL= findHeight(root->left);
        int HR= findHeight(root->right);
        if( abs(HL - HR) > 1 ) {
            return false;
        }

        bool lef= isBalanced(root->left);
        bool rig= isBalanced(root->right);
        
        if( !lef || !rig ) {
            return false;
        }
        return true;
    }
};