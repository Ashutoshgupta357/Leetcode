class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0,sum2=0;
        int p=nums.size()-1;
        for(int i=0;i<k;i++){
            sum1+=nums[i];
            sum2+=nums[p-i];
        }
        return abs(sum1-sum2);
    }
};