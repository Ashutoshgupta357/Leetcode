class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int q = 0;

        for (int i = 0; i < k; i++) {
            q += nums[i];
        }

        int s = q;

        for (int i = k; i < nums.size(); i++) {
            s = s + nums[i] - nums[i - k];
            q = max(q, s);
        }

        return (double)q / k;
    }
};