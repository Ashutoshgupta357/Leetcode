class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int y=0;
            while(x>0){
                y=y+x%10;
                x=x/10;
            }
            if(y==i){
                return i;
            }

        }
       
            return -1;
      
    }
};