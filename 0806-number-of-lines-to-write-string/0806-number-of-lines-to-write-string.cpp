class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int count = 0;
        int sum = 1;

        for (int i = 0; i < s.size(); i++) {
            if (count + widths[s[i] - 'a'] <= 100) {
                count += widths[s[i] - 'a'];
            }
            else {
                sum++;
                count = widths[s[i] - 'a'];
            }
        }

        return {sum, count};
    }
};