class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()==1) return 1;
           else if(i==0 ){
                if(nums[i]>=nums[i+1]) count++;
            }
            else if(i==nums.size()-1){
                if(nums[i]>=nums[i-1]) count++;
                
            }
            else{
            float x=(nums[i-1]+nums[i+1])/2.0;
            if(nums[i]>=x){
                count++;
            }
            }
        }
        return count;
    }
};