class Solution {
public:
    int minRotations(string s) {
        int sum = 0;
        int x = 0;

        for(int i = 0; i < s.size(); i++) {
            int p = s[i] - '0';

            sum += min(abs(p - x), 10 - abs(p - x));

            x = p;
        }

        return sum;
    }
};