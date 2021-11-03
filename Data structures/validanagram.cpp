
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int count[26] = {0};
        for(char ch : t)
            count[ch - 'a']++;
        
        for(char ch : s)
            if(count[ch - 'a']-- <= 0)
                return false;
        
        return true;
    }
};
