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
    bool max_left(int root_node, TreeNode*node)
    {
        bool left=true, right=true;
        if(root_node<=node->val)
            return false;
        if(node->left!=NULL)
            left=max_left(root_node, node->left);
        if(node->right!=NULL)
            right=max_left(root_node, node->right);
        if(left&&right)
            return true;
        return false;
    }
    bool max_right(int root_node, TreeNode*node)
    {
        bool left=true, right=true;
        if(root_node>=node->val)
            return false;
        if(node->left!=NULL)
            left=max_right(root_node, node->left);
        if(node->right!=NULL)
            right=max_right(root_node, node->right);
        if(left&&right)
            return true;
        return false;
    }
    bool max(int root_val, TreeNode*node)
    {
        bool left=true, right=true;
        if(node->left!=NULL&&node->val<node->left->val||node->right!=NULL&&node->val>node->right->val)
            return false;
        if(node->left!=NULL&&node->val>node->left->val)
            left=max_left(root_val, node->left);
        if(node->right!=NULL&&node->val<node->right->val)
            right=max_right(root_val, node->right);
        if(left&&right)
            return true;
        return false;
    }
    
public:
    bool isValidBST(TreeNode* root) {
        bool left=true, right=true;
        if(root==NULL||root->left==NULL&&root->right==NULL)
            return true;
        if(root->right!=NULL&&root->val>=root->right->val||root->left!=NULL&&root->val<=root->left->val)
            return false;
        bool Max=max(root->val, root);
        if(root->left!=NULL)
            left=isValidBST(root->left);
        if(root->right!=NULL)
            right=isValidBST(root->right);
        
        if(left&&right&&Max)
            return true;
        return false;
    }
};