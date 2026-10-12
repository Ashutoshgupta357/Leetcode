class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum=0;
         map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto p:mp){
            if(p.second%k==0){
                sum=sum+(p.second*p.first);
            }
        }
        return sum;

    }
};