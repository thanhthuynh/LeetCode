class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i;
        string result = "";
        string big, little;

        if(word1.length() > word2.length()){
            big = word1;
            little = word2;
        } else {
            big = word2;
            little = word1;
        }

        for(i = 0; i < little.length(); i++){
            result = result + word1[i] + word2[i];
        }
        
        return result + big.substr(i, big.length()-i);
    }
};