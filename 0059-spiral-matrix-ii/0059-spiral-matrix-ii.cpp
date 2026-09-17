class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //initialize 2d array with zero
        vector<vector<int>>ans (n,vector<int>(n,0));
        int rstart=0;
        int cstart=0;
        int rend=n-1;
        int cend=n-1;
        int target=1;
        while(rstart<=rend && cend>=cstart){
            //left to right
            for(int i=cstart;i<=cend;i++){
                ans[rstart][i]=target++;

            }
            //top to bottom
            for(int i=rstart+1;i<=rend;i++){
                ans[i][cend]=target++;
            }
            //right to left
            if(rstart!=rend && cstart!=cend){
                for(int i=cend-1;i>=cstart;i--){
                    ans[rend][i]=target++;
                }
            }//bottom to top
            if(rstart!=rend && cstart!=cend){
                for(int i=rend-1;i>rstart;i--){
                    ans[i][cstart]=target++;
                }
            }
            rstart++;
            rend--;
            cstart++;
            cend--;

        }
        return ans;
    }
};