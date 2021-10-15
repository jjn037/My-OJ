//
// Created by jianan on 2021/10/15.
//

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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return vector<int>();
        vector<int> results;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* node = root;
        while(!st.empty() || node != nullptr){

            if(node->left){
                st.push(node->left);
            }
            else{
                node = st.top();
                results.push_back(node->val);
                st.pop();
                if(node->right)
                    node = node->right;

            }
        }
        return results;
    }
};