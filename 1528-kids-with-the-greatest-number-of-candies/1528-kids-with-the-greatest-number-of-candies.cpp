#include<iostream>
#include<algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highest = *max_element(std::begin(candies), std::end(candies));
        vector<bool> result;
        for(int i = 0; i < candies.size(); i++){
            result.push_back(candies[i] + extraCandies >= highest);
        }
        return result;
    }
};