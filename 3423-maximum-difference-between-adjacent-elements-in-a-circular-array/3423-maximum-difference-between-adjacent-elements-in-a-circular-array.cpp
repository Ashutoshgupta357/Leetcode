class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int m=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            int p=abs(nums[i]-nums[i+1]);
            m=max(p,m);
        }
        int q=abs(nums[0]-nums[nums.size()-1]);
        return max(m,q);
    }
};