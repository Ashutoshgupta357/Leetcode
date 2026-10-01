class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                s=s|nums[i];
            }
        }
        return s;
    }
};