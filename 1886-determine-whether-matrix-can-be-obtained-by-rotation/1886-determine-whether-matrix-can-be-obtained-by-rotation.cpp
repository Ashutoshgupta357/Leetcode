class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<=3;i++){
            if(mat==target){
                return true;
            }
            else{
                rotate(mat);
            }
        }
        return false;
    }

    void rotate(vector<vector<int>>& x){
        int n=x.size()-1;
        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                swap(x[i][j],x[j][i]);

            }
        }
        for(int i=0;i<=n;i++){
            int k=0;
            int j=n;
            while(k<=j){
                swap(x[i][k],x[i][j]);
                k++;
                j--;
            }
        }
    }
};