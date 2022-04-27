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
    void preorder(TreeNode*root, vector<int>&x)
    {
        if(root==NULL)
            return;
        x.push_back(root->val);
        preorder(root->left, x);
        preorder(root->right,x);
    }
public:
    void flatten(TreeNode* root) {
        if(root==NULL||root->left==NULL&&root->right==NULL)
            return;
        TreeNode*p=new TreeNode;
        TreeNode*q=p;
        vector<int>preorder_trav;
        preorder(root, preorder_trav);
        // sort(inorder_trav.begin(), inorder_trav.end());
        for(int i=0;i<preorder_trav.size();i++)
        {
            // p->val=inorder_trav[i];
            // p->left=NULL;
            // p->right=new TreeNode;
            // p=p->right;
            root->val=preorder_trav[i];
            root->left=NULL;
            if(root->right!=NULL)
                root=root->right;
            else
            {
                if(i==preorder_trav.size()-1)
                    break;
                root->right=new TreeNode;
                root=root->right;
            }
        }
    }
};