class Solution {
public:
    int minDeletionSize(vector<string>& stsr) {
        int count=0;
        for(int i=0;i<stsr[0].size();i++){
            for(int j=0;j<stsr.size()-1;j++){
                if(stsr[j][i]>stsr[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};