class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int p=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        for(int i=0;i<p;i++){
            for(int j=0;j<m;j++){
                ans.push_back(mat[i][j]);
            }
        }
        int x=ans.size();
        if(x!=(r*c)){
            return mat;
        }
        vector<vector<int>>arr(r,vector<int>(c));
        int y=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=ans[y];
                y++;
                
            }
        }
        return arr;
    }
};