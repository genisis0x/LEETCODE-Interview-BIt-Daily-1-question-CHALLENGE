class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> ans(k+1);
        ans[0] = 1;
        for(int i=1; i<=k; ++i) {
        ans[i] = (int)((long)ans[i-1]*(k-i+1)/i);
        }
        return ans;
    }
};
