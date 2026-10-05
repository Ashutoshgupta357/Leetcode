class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>ans;
        vector<int>arr;
        for(auto i:nums){
            ans[i]++;
        }
        for(auto i:ans){
            if(i.second>1){
                arr.push_back(i.first);
            }
        }
        return arr;
    }
};