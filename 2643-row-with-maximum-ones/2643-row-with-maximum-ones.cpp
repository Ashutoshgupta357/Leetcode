class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;

            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        int ma = 0;
        int index = 0;

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] > ma) {
                ma = ans[i];
                index = i;
            }
        }

        return {index, ma};
    }
};