class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int x) {
        int m=grid.size();
        int n=grid[0].size();
        int p=m*n;

        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                ans.push_back(grid[i][j]);
            }
        }
         vector<int> arr(p);
        for(int k=0;k<p;k++){
            arr[(x+k)%p]=ans[k];

        }
        for(int o=0;o<p;o++){
            grid[o/n][o%n]=arr[o];

        }

        return grid;
    }
};