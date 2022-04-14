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
    void forleft(TreeNode*node_left,TreeNode*node, int value)
    {
        if(node_left->val>value)
        {
            int temp=node->val;
            node->val=node_left->val;
            node_left->val=temp;
            forleft(node_left, node, node->val);
        }
        else
        {
            if(node_left->left!=NULL)
                forleft(node_left->left, node, value);
            if(node_left->right!=NULL)
                forleft(node_left->right, node, value);
        }
    }
    void forright(TreeNode*node_right,TreeNode*node, int value)
    {
        if(node_right->val<value)
        {
            int temp=node->val;
            node->val=node_right->val;
            node_right->val=temp;
            forright(node_right, node, node->val);
        }
        else
        {
            if(node_right->left!=NULL)
                forright(node_right->left, node, value);
            if(node_right->right!=NULL)
                forright(node_right->right, node, value);
        }
    }
public:
    void recoverTree(TreeNode* root) {
        if(root==NULL||root->left==NULL&&root->right==NULL)
            return;
        if(root->left!=NULL&&root->right!=NULL&&root->left->val>root->val&&root->right->val<root->val)
        {
            int temp=root->left->val;
            root->left->val=root->right->val;
            root->right->val=temp;
        }
        if(root->left!=NULL)
        {
            forleft(root->left, root, root->val);
            if(root->right!=NULL)
                forright(root->right, root, root->val);
        }
        if(root->right!=NULL)
        {
            forright(root->right, root, root->val);
            if(root->left!=NULL)
                forleft(root->left, root, root->val);
        }
        if(root->left!=NULL)
            recoverTree(root->left);
        if(root->right!=NULL)
            recoverTree(root->right);
    }
};