class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else {
                sum2=sum2+nums[i];
            }
            
        }
        if(sum!=sum2){
            return true;
        }
        return false;
    }
};