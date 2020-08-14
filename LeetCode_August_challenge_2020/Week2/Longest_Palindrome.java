class Solution {
    public int longestPalindrome(String s) {
       int[] hm = new int[128];
        for(char a : s.toCharArray()) {
            hm[a]++;
        }
        int res = 0;
        boolean flag = true;
        for(int a : hm) {
            res += (a/2)*2;
            if(a%2==1 && flag) {
                res++;
                flag = false;
            }
        }
        return res;
    }
}
