class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        string minimum;
        string word = strs[0];
        for(int i=0; i < word.length(); i++){
            bool valid = true;

            for(int j=0; j<strs.size(); j++){
                if(i >= strs[j].length() || word[i] != strs[j][i]){
                    valid = false;
                    break;
                }
            }

            if(valid){
                prefix += word[i];
            } else {
                break;
            }
        } 
        return prefix;
    }
};