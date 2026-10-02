class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(auto i: nums){
            ans[i]++;
        }
        vector<int>arr;
        int p=nums.size()/3;
        for(auto j:ans){
            if(j.second>p){
                arr.push_back(j.first);
            }

        }
        return arr;
    }
};