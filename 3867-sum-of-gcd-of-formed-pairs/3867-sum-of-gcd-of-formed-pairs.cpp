class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixgcd(nums.size());
        long long mx=0;
        for(int i=0;i<nums.size();i++){
            mx=std::max(mx,(long long)nums[i]);
            prefixgcd[i]=gcd(nums[i],mx);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        
        int j=nums.size()-1;
        long long sum=0;
        for(int i=0;i<j;i++){
            sum=sum+gcd(prefixgcd[i],prefixgcd[j]);
            j--;

        }
        return sum;
    }
};