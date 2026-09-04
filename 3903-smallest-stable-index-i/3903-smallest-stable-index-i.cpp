class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ma=0;
        int x=INT_MAX;
        int mi=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            ma=max(nums[i],ma);
            mi = *min_element(nums.begin() + i, nums.end());
            int p=ma-mi;
            if(p<=k){
                x=min(i,x);
            }
        }
        if(x==INT_MAX){
            return -1;
        }
        return x;
    }
};