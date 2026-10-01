class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> freq(100001, 0);

        for(int x : nums) {
            if(x % 2 == 0) {
                freq[x]++;
            }
        }

        int ans = -1;
        int maxi = 0;

        for(int i = 0; i <= 100000; i++) {
            if(i % 2 == 0 && freq[i] > maxi) {
                maxi = freq[i];
                ans = i;
            }
        }

        return ans;
    }
};