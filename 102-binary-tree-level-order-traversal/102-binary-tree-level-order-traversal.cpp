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
    void my_level(TreeNode*root, vector<vector<int>>&output_vec, int level)
    {
        if(root->left!=NULL&&root->right!=NULL)
        {
            if(output_vec.size()<level)
            {
                output_vec.push_back({root->left->val,root->right->val});
                level++;
            }
            else
            {
                output_vec[level-1].push_back(root->left->val);
                output_vec[level-1].push_back(root->right->val);
                level++;
            }
            my_level(root->left, output_vec, level);
            my_level(root->right, output_vec, level);
        }
        else if(root->left!=NULL&&root->right==NULL)
        {
            if(output_vec.size()<level)
            {
                output_vec.push_back({root->left->val});
                level++;
            }
            else
            {
                output_vec[level-1].push_back(root->left->val);
                level++;
            }
            my_level(root->left, output_vec, level);
        }
        else if(root->right!=NULL&&root->left==NULL)
        {
            if(output_vec.size()<level)
            {
                output_vec.push_back({root->right->val});
                level++;
            }
            else
            {
                output_vec[level-1].push_back(root->right->val);
                level++;
            }
            my_level(root->right, output_vec, level);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<vector<int>> output_vec;
        if(root->left==NULL&&root->right==NULL)
        {
            output_vec.push_back({root->val});         
            return output_vec;
        }
        int level=2;
        output_vec.push_back({root->val});
        my_level(root, output_vec, level);
        return output_vec;

    }
};