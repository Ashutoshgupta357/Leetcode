class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int p=nums.size();
        vector<int>x;
        vector<int>ans(1001,0);
        for(int i=0;i<nums[0].size();i++){
            ans[nums[0][i]]++;

        }
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                ans[nums[i][j]]++;
            }

        }
        for(int i=0;i<1001;i++){
            if(ans[i]==p){
                x.push_back(i);
            }

        }
return x;
    }
};