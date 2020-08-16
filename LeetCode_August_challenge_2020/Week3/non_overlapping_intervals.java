class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(), intervals.end(), [](auto a, auto b){
            return a[1] < b[1];
        });
        int size = intervals.size();
        if(!size) return ans;
        int past = intervals[0][1];
        for(int i=1; i<size; ++i) {
            if(intervals[i][0] < past)
                ans++;
            else
                past = intervals[i][1];
        }
        return ans;
    }
};
