class Solution {
    private int pow(int a, int b) {
        int ans = 1;
        while(b > 0) {
            ans *= a;
            --b;
        }
        return ans;
    }
    public int titleToNumber(String s) {
        int size = s.length();
        int ans = 0;
        for(int i=0; i<size; ++i) {
            int num = pow(26, size-i-1);
            int b = s.charAt(i) - 'A' + 1;
            ans += (num*b);
        }
        return ans;
    }
}
