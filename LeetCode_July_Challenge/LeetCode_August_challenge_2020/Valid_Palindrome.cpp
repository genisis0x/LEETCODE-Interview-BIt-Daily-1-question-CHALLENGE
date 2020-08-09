class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        string res = "";
        for(char a : s) {
            if(a >= 'A' && a <= 'Z')
                res += (a - 'A' + 'a');
            else if(a >= 'a' && a <= 'z')
                res += a;
            else if( a >= '0' && a <= '9')
                res += a;
        }
        string res1 = res;
        reverse(res.begin(), res.end());
        return res == res1;
    }
    
};
