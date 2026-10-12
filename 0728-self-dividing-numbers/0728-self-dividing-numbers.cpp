
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i = left; i <= right; i++) {
            int n = i;

            while(n > 0) {
                int r = n % 10;

                if(r == 0 || i % r != 0) {
                    break;
                }

                n = n / 10;
            }

            if(n == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
