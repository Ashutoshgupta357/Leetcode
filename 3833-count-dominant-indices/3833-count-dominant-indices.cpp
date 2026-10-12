class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            int sum = 0;
            int t = 0;

            for(int j = i + 1; j < nums.size(); j++) {
                sum += nums[j];
                t++;
            }

            if(nums[i] > (sum / t)) {
                count++;
            }
        }

        return count;
    }
};