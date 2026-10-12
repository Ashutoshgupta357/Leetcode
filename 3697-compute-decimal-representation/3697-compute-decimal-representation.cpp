
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int p = 1;

        while(n > 0) {
            int digit = n % 10;

            if(digit != 0) {
                ans.push_back(digit * p);
            }

            n /= 10;

            if(n > 0) {
                p *= 10;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
