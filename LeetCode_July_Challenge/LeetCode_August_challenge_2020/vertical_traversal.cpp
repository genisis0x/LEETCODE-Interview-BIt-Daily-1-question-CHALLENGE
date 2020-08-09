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
    vector<vector<int>> ans;
    map<int, vector<pair<int, int>>> hm;
    
    void DepthTraversal(TreeNode *root, int heightX, int heightY) {
        hm[heightX].push_back({heightY, root->val});    
        if(root->left)
            DepthTraversal(root->left, heightX-1, heightY+1);
        if(root->right)
            DepthTraversal(root->right, heightX+1, heightY+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        DepthTraversal(root, 1000, 0);
        for(auto i : hm) {
            auto a = i.second;
            sort(a.begin(), a.end());
            vector<int> temp;
            for(auto j : a) {
                temp.push_back(j.second);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
