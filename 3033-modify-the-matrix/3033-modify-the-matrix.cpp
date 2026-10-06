class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int j = 0; j < n; j++) {

            int mi = INT_MIN;

            // Find maximum of current column
            for(int i = 0; i < m; i++) {
                mi = max(mi, matrix[i][j]);
            }

            // Replace -1 with maximum
            for(int i = 0; i < m; i++) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = mi;
                }
            }
        }

        return matrix;
    }
};