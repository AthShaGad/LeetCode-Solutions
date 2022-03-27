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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // TreeNode*p=root;
        // TreeNode*q=NULL;
        if(root==NULL)
            return NULL;
        if(root->val==key)
        {
            if(root->left==NULL&&root->right==NULL)
                return NULL;
            else if((root->left==NULL&&root->right!=NULL)||(root->right==NULL&&root->left!=NULL))
            {
                if(root->left==NULL)
                    return root->right;
                else
                    return root->left;
            }
            else
            {
                TreeNode*p=root;
                TreeNode*q=NULL;
                p=root->right;
                while(p->left!=NULL)
                {
                    q=p;
                    p=p->left;
                }
                root->val=p->val;
                if(q!=NULL)
                    q->left=p->right;

                else
                    root->right=p->right;
                
                
                return root;
            }
        }
        else if(key<root->val)
        {
            root->left=(deleteNode(root->left,key));
            return root;
        }
        else 
        {
            root->right=(deleteNode(root->right,key));
            return root;
        }
     }
};