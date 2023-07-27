class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x != 0){
            int remainder = x % 10;
            x /= 10;
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10) return 0;
            reverse = 10*reverse + remainder;
        }
        return reverse;
    }
};