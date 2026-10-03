class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if((i%10)==nums[i]){
                m=min(i,m);
            }
        }


        if(m==INT_MAX){
        return -1;
        }
        else{
            return m;
        }
    }
};