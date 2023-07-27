class Solution {
public:
    bool isPalindrome(int n) {
        int x = n;
        long long int rev = 0;
        do {
            rev = (rev*10) + abs(x)%10;
            x = x/10;
        } while(x != 0);

        if(rev == n)
            return 1;
        else
            return 0;
    }
};