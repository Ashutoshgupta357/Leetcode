class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int p=grid.size();
        int s=p*p;

        vector<int>ans(s+1,0);
        for(int i=0;i<p;i++){
            for(int j=0;j<p;j++){
                ans[grid[i][j]]++;
            }
        }
        vector<int>arr;
        int x,y;
        for(int i=1;i<ans.size();i++){
            if(ans[i]>1){
                 x=i;
            }
            if(ans[i]==0){
                y=i;

            }
        }
        return {x,y};
    }
};