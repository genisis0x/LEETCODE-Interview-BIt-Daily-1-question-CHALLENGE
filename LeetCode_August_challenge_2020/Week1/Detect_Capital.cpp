class Solution {
public:   
    bool detectCapitalUse(string word) {
        if(word.size()<=1) return true;
        bool f1 = 0, f2 = 0;
        f1 = (word[0] >= 'a');
        f2 = (word[1] >= 'a');
        if(f1 != f2 && f1) return false;
        for(int i=2; i<word.size(); ++i) {
            if(word[i] >= 'a' != f2) return false;
        }
        return true;
     }
};
