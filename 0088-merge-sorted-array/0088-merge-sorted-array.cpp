#include <bits/stdc++.h>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int length = m+n;
        int index = 0;
        for(int i = m; i < length; i++){
            nums1[i] = nums2[index++];
        }

        sort(nums1.begin(), nums1.end());
    }
};