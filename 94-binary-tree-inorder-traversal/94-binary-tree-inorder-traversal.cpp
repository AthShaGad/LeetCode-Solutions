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
    void inorder(TreeNode*root, vector<int>&x)
    {
        if(root==NULL)
            return;
        inorder(root->left, x);
        x.push_back(root->val);
        inorder(root->right,x);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder_trav;
        inorder(root, inorder_trav);
        return inorder_trav;
    }
};