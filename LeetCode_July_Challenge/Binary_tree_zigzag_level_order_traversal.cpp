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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode *> q;
        bool flag = 1;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> tempAns;
            for(int i=0; i<size; ++i) {
                TreeNode *parent = q.front();
                tempAns.push_back(parent->val);
                q.pop();
                if(parent->left) q.push(parent->left);
                if(parent->right) q.push(parent->right);
                }
            if(!flag) reverse(tempAns.begin(), tempAns.end());
            ans.push_back(tempAns);
            flag = !flag;
        }
        return ans;
    }
};
