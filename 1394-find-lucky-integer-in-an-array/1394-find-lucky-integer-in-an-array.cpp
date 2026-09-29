class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>ans(501,0);
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        int x=-1;
        for(int i=500;i>0;i--){
            if(ans[i]==i){
                x=i;
                break;
            }
        }
        return x;
    }
};