//
// Created by jianan on 2021/11/2.
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
private:
    vector<string> results;
    string tmp;
public:
    void backtrack(TreeNode* root, string tmp){
        if(root == nullptr){
            results.push_back(tmp);
            return;
        }
        if(root->left != nullptr){

            backtrack(root->left, tmp + (root->val).to_string()+ "->");

        }
        if(root->right != nullptr){

            backtrack(root->right, tmp + (root->val).to_string() + "->");

        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == nullptr)
            return;
        backtrack(root, "")
    }
};