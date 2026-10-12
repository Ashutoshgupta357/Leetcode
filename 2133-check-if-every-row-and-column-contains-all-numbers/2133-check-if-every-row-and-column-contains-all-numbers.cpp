class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            set<int> ans;

            for (int j = 0; j < n; j++) {
                ans.insert(matrix[i][j]);
            }

            if (ans.size() != n) {
                return false;
            }
        }

        for (int i = 0; i < n; i++) {
            set<int> ans;

            for (int j = 0; j < n; j++) {
                ans.insert(matrix[j][i]);
            }

            if (ans.size() != n) {
                return false;
            }
        }

        return true;
    }
};