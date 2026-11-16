class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        int count=1;
        int x=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int p=nums[i];
            
            if(nums[i]+1==nums[i+1]){
                count++;
            }
            else if(nums[i]==nums[i+1]){
                continue;
                
            }
            else{
                count=1;
                
            }
            x=max(count,x);
        }
        return x;
    }
};