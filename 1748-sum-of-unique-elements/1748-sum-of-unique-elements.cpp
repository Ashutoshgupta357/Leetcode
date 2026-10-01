class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       vector<int>ans(101,0);
       for(int i=0;i<nums.size();i++){
        ans[nums[i]]++;

       }
       int sum=0;
       for(int i=0;i<ans.size();i++){
        if(ans[i]==1){
            sum=sum+i;
        }
       }
return sum;
    }
};