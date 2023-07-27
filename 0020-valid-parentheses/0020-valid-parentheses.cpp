class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        map<char, char> map;
        map['('] = ')';
        map['{'] = '}';
        map['['] = ']';

        for(int i = 0; i < s.length(); i++){
            if(!stack.empty() && map[stack.top()] == s[i]){
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }
        return stack.empty();
    }
};