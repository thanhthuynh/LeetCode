class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0; int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) candidate = num;    
            count = (num == candidate) ? count + 1 : count - 1;
        }
        return candidate;
    }
};