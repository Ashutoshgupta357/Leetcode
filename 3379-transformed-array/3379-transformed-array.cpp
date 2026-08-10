class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0)
                ans[i] = 0;
            else {
                int j = (i + nums[i]) % n;

                if(j < 0)
                    j += n;

                ans[i] = nums[j];
            }
        }

        return ans;
    }
};