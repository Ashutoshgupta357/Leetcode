
class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string s = "";
        unsigned int n = num;

        while (n > 0) {
            int x = n % 16;

            if (x <= 9)
                s.push_back(char(x + '0'));
            else
                s.push_back(char(x + 'a' - 10));

            n = n / 16;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
