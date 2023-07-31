class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.empty()) return 0;
    
        char curr = chars[0]; int count = 1; int length = chars.size();
        string s;
        
        for (int i = 1; i <= length; i++) {
            if (i < length && chars[i] == curr) {
                count++;
            } else {
                s.push_back(curr);

                if (count > 1) {
                    string str = to_string(count);
                    for (char c : str) s.push_back(c);
                }

                curr = i < length ? chars[i] : 0;
                count = 1;
            }
        }
        
        for (int i = 0; i < s.size(); i++) chars[i] = s[i];

        return s.size();
    }
};