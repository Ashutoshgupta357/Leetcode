class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            int p=nums[i];
            while(p>0){
                ans.push_back(p%10);
                p=p/10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};