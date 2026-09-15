/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == nullptr)
            return {};
        stack<vector<int>> s;
        vector<vector<int>> ans;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> sub;
            int n = q.size();

            while (n--) {
                TreeNode* node = q.front();
                q.pop();
                sub.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.insert(ans.begin(), sub);
        }
        return ans;
    }
};