class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p=nums[0];
        int n=nums.size();
        int q=nums[n-1];
        vector<int>arr;
        for(int i=p;i<=q;i++){
            arr.push_back(i);
        }
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<arr.size()){
            if(arr[i]==nums[j]){
                i++;
                j++;
            }
            else if(arr[i]<nums[j]){
                ans.push_back(arr[i]);
                i++;
            }
        }
        return ans;
    }
};