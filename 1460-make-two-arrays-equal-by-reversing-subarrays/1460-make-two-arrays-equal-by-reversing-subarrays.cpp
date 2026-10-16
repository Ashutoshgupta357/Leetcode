class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>ans(1001,0);
        for(int i=0;i<target.size();i++){
            ans[target[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            
            if(ans[arr[i]]==0){
                return false;

            }
            else{
                ans[arr[i]]--;
            }
        }
        return true;
    }
};