class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string t = "";

        // '-' remove + uppercase
        for (char c : s) {
            if (c != '-') {
                t += toupper(c);
            }
        }

        string ans = "";
        int cnt = 0;

        // Right to left
        for (int i = t.size() - 1; i >= 0; i--) {
            ans += t[i];
            cnt++;

            if (cnt == k && i != 0) {
                ans += '-';
                cnt = 0;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};