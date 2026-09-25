class Solution {
public:
    string thousandSeparator(int n) {
        string s = "";
        int x = 0;
        int count = 0;

        if(n == 0)
            return "0";

        while(n > 0) {
            x = n % 10;

            if(count == 3) {
                s.push_back('.');
                count = 0;
            }

            s.push_back(x + '0');

            count++;
            n = n / 10;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};