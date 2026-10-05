class Solution {
public:
    bool validDigit(int n, int x) {
        bool found = false;

        int first = n;
        while(first >= 10) {
            first /= 10;
        }

        if(first == x)
            return false;

        while(n > 0) {
            int r = n % 10;

            if(r == x)
                found = true;

            n /= 10;
        }

        return found;
    }
};