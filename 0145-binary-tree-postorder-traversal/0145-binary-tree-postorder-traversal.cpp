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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        stack<int> ans;
        st.push(root);
        while(!st.empty() && st.top()!=nullptr) {
            TreeNode* temp= st.top();
            ans.push(temp->val);
            st.pop();
            if(temp->left != nullptr) {
                st.push(temp->left);
            }
            if(temp->right != nullptr) {
                st.push(temp->right);
            }
        }
        vector<int> postOrder;
        while(!ans.empty()) {
            postOrder.push_back(ans.top());
            ans.pop();
        }
        return postOrder;
    }
};