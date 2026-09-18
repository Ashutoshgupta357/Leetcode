class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>arr(m,vector<int>(n));
        int p=m*n;
        if(p!=original.size()){
            return {};
        }

        int x=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=(original[x]);
                x++;
            }
        }
        
        return arr;

    }
};