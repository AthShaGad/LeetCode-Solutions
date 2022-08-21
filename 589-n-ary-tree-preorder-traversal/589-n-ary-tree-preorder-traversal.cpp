/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void my_preorder(Node*root,vector<int>&output_vec)
    {
        output_vec.push_back(root->val);
        for(auto i:root->children)
        {
            my_preorder(i, output_vec);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>output_vec;
        if(root==NULL)
            return output_vec;
        else if(root->children.size()==0)
            return {root->val};
        else
            my_preorder(root,output_vec);
        return output_vec;
    }
};