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
    int depth(TreeNode* root,int d)
    {
        if(root==NULL)return d;
        
        
        return d=1+max(depth(root->left,d),depth(root->right,d));
    }
    int maxDepth(TreeNode* root) {
        int d=0;

        return depth(root,d);
        
    }
};