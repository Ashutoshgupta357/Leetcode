class Solution {
public:
    string clearDigits(string s) {
        string x = "";

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                if (!x.empty() && !isdigit(x.back())) {
                    x.pop_back();
                }
            }
            else {
                x.push_back(s[i]);
            }
        }

        return x;
    }
};