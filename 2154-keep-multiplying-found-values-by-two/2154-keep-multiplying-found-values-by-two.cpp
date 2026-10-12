
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true) {
            bool found = false;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == original) {
                    original *= 2;
                    found = true;
                    break;
                }
            }

            if(!found) {
                return original;
            }
        }
    }
};
