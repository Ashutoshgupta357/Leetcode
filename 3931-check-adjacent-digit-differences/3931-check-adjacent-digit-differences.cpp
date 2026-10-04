class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0;i<s.size()-1;i++){
            int p=s[i]-'0';
            int q=s[i+1]-'0';
            int r=abs(p-q);
            if(r>2){
                return false;
            }
        }
        return true;
    }
};