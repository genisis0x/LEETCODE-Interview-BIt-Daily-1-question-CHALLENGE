class Solution {
    public int titleToNumber(String s) {
        int size = s.length();
        int ans = 0;
        for(int i=0; i<size; ++i) {
            ans = ans*26 + s.charAt(i) - 'A' + 1;
        }
        return ans;
    }
}
