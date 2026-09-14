class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root == nullptr)
            return {};

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        q.push(root);

        int levelCounter = 0;

        while (!q.empty()) {

            int levelSize = q.size();
            vector<int> sub;

            for (int i = 0; i < levelSize; i++) {

                TreeNode* node = q.front();
                q.pop();

                sub.push_back(node->val);

                // Queue ALWAYS remains normal BFS
                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            // Reverse OUTPUT on alternate levels
            if (levelCounter % 2 == 1)
                reverse(sub.begin(), sub.end());

            ans.push_back(sub);

            // Change direction AFTER completing the level
            levelCounter++;
        }

        return ans;
    }
};