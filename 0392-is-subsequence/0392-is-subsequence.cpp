class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int slen = s.length();
        for(int i = 0; i < t.length(); i++){
            if(j >= slen) return true;
            if(t.at(i) == s.at(j)) j++;
        }
        return j == slen;
    }
};