class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>ans;
        int rstart=0;
        int cstart=0;
        int rend=matrix.size()-1;
        int cend=matrix[0].size()-1;
        if(matrix.empty()) return {};

        while(rstart<=rend && cstart<=cend){
            for(int i=cstart;i<=cend;i++){
                ans.push_back(matrix[rstart][i]);

            }
            for(int j=rstart+1;j<=rend;j++){
                  ans.push_back(matrix[j][cend]);

            }
            if(rstart != rend && cend != cstart){
            for(int k=cend-1;k>=cstart;k--){
                
                ans.push_back(matrix[rend][k]);
            }}

            if(rstart != rend && cend != cstart){
            for(int k=rend-1;k>rstart;k--){
                
                ans.push_back(matrix[k][cstart]);
            }
            }
            rstart++;
            cstart++;
            cend--;
            rend--;
        }
        return ans;
    }
};