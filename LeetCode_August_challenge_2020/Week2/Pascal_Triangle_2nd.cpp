class Solution {
public:
    vector<int> getRow(int k) {
        vector<long long> ans(k+1);
        ans[0] = 1;
        for(int i=1; i<=k; ++i) {
        ans[i] = ans[i-1]*(k-i+1)/i;
        }
        vector<int> res;
        for(auto i : ans)
            res.push_back(i);
        return res;
    }
};
