class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>ans(10,0);

        int score=0;
        while(n>0){
            int r=n%10;
            ans[r]++;
            n=n/10;
        }
        for(int i=0;i<ans.size();i++){
            score=score+(ans[i]*i);
        }
        return score;
    }
};