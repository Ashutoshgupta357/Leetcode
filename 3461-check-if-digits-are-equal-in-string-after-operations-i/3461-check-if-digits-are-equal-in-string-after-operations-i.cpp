class Solution {
public:
    bool hasSameDigits(string s) {
        string ans="";
        while(s.size()>2){
            for(int i=0;i<s.size()-1;i++){
                
                int x = (s[i] - '0' + s[i+1] - '0') % 10;
                ans += to_string(x);
           }
           s=ans;
           ans="";

        }
        return s[0]==s[1];
    }
};