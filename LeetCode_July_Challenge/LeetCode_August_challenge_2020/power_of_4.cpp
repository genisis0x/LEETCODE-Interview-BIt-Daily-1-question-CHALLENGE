class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 0)
            return false;
        double n = log2(num);
        if(floor(n) != n)
            return false;
        return (int)n%2 == 0;
    }
};
