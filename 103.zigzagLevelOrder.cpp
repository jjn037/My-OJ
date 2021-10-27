//
// Created by jianan on 2021/10/22.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr)
            return vector<vector<int>>();
        vector<vector<int>> results;
        bool reverse_flag = true;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();

            vector<int> level_node;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
                level_node.push_back(node->val);

            }
            if(level % 2 != 0)
                reverse(level_node.begin(), level_node.end());
            results.push_back(level_node);
            level++;
        }
        return results;
    }
};