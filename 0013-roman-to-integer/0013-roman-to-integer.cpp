class Solution {
public:
    int romanToInt(string s) {
        map<char,int> char2Int{{'I',1},{'V',5}, {'X',10},
        {'L',50}, {'C',100}, {'D',500}, {'M',1000}};

        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            int current = char2Int[s[i]];
            int next = (i + 1 < s.length()) ? char2Int[s[i + 1]] : 0;
            if(current >= next){
                sum += current;
            } else {
                sum += (next - current);
                i++;
            }
        }
        return sum;
    }
};