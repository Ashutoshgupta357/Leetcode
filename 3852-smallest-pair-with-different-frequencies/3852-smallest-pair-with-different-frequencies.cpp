class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int> ans(101, 0);

        for(int i = 0; i < nums.size(); i++){
            ans[nums[i]]++;
        }

        int x = -1;

        for(int i = 1; i < ans.size(); i++){
            if(ans[i] > 0){
                if(x == -1){
                    x = i;
                }
                else if(ans[i] != ans[x]){
                    return {x, i};
                }
            }
        }

        return {-1, -1};
    }
};