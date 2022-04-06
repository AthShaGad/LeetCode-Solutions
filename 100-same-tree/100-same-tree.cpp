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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
        if(p==NULL&&q!=NULL||q==NULL&&p!=NULL)
            return false;
        if(p->val==q->val&&p->left==NULL&&p->right==NULL&&q->left==NULL&&q->right==NULL)
            return true;
        bool left=false, right=false;
        if(p->val==q->val)
        {
            left=isSameTree(p->left, q->left);
            
            right=isSameTree(p->right, q->right);
        }
        if(left&&right)
            return true;
        return false;
    }
};