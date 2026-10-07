class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        int n = columnNumber;

        while(n > 0) {
            n--;

            s += (n % 26) + 'A';

            n /= 26;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};