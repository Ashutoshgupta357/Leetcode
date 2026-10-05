class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>ans(101,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;

        }
        for(int i=0;i<ans.size();i++){
            int p=ans[i];
            int count=0;
            for(int i=1;i<=p;i++){
                if(p%i==0){
                    count++;
                }

            }
            if(count==2){
                return true;
            }
        }
        return false;
    }
};