class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>arr={-1,-1};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                    arr[0]=i;
                    arr[1]=j;
                    return arr;
                }

            }
        }
        return arr;
    }
};