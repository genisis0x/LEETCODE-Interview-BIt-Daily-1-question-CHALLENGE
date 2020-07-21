class Solution {
public:
    
    long long cal(long long n) {
        return ((n*(n+1))/2);
    }
    
    int arrangeCoins(int n) {
        long long left = 1;
        long long right = n;
        while(left <= right) {
            long long mid = (right-left)/2 + left;
            long long val = cal(mid);
            if(val==n) {
                return mid;
            }
            else if(val > n)
                right = mid-1;
            else
                left = mid+1;
        }
        return right;
    }
};
