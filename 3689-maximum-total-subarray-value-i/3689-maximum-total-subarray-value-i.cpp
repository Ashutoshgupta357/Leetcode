 class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long m= *max_element(nums.begin(),nums.end());
        long long  n=*min_element(nums.begin(),nums.end());
        long long x=m-n;
        long long int y=k*x;
        return y;
        
    }
};