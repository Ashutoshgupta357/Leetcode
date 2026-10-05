class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        int count = 0;

        while(n > 0) {
            s.push_back((n % 2) + '0');
            n = n / 2;
        }

        string y = s;
        reverse(y.begin(), y.end());

        for(int i = 0; i < s.size(); i++) {
            if(y[i] != s[i]) {
                count++;
            }
        }

        return count;
    }
};