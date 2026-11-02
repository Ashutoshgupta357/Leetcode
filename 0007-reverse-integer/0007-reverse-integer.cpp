class Solution {
public:
    int reverse(int x) {

        long long rev = 0;

        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        if(int(rev)!=rev){
            return 0;
        }

        return rev;
    }
};