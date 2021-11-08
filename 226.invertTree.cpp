//
// Created by jianan on 2021/10/29.
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
//    void invertTree(TreeNode* left, TreeNode* right){
//        if(left == nullptr && right == nullptr)
//            return;
//        reverse(left, right);
//        return invertTree(left->left, right->right) && invertTree(left->right, right->left);
//    }

    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

    TreeNode* invertTree2(TreeNode* root) {
        if(root==nullptr) return root;
        stack<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size(); i++){
                TreeNode* node = q.front();
                q.pop();
                swap(root->left, root->right);
                if(root->left != nullptr) q.push(root->left);
                if(root->right != nullptr) q.push(root->right);
            }
        }
        return root;
    }
};

