class Solution {
public:
    bool isFascinating(int n) {
        int x=n;
        int y=2*n;
        int z=3*n;
        string s="";
        s=s+to_string(x)+to_string(y)+to_string(z);
        vector<int>ans(10,0);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'0']++;
        }
         if(ans[0]!=0){
                return false;
            }
        for(int i=1;i<10;i++){
           
            if(ans[i]!=1){
                return false;
            }
        }
        return true;
    }
};