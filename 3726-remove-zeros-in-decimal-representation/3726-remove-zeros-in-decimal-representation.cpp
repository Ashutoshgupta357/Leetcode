class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                ans.push_back(s[i]);
                
            }
        }
        long long a=stoll(ans);

        return a;
    }
};