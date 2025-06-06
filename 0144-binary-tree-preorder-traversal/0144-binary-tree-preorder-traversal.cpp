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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        stack<TreeNode*> st;
        TreeNode* temp= root;
        while(st.size()>0 || temp!=nullptr) {
            answer.push_back(temp->val);
            if(temp->right != nullptr) {
                st.push(temp->right);
            } 
            if(temp->left != nullptr) {
                temp= temp-> left;
            } else {
                if(st.size() == 0) {
                    break;
                } 
                temp= st.top();
                st.pop();
            }
        }
        return answer;
    }
};