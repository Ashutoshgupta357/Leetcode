class Solution {
public:
    long long sumAndMultiply(int n) {
       string s=to_string(n);
       long sum=0;
       string ans="";
       for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            ans=ans+s[i];
            sum= sum + (s[i]-'0');
          }
       }
       if (ans.empty()) return 0;

       long x=stoi(ans);
       
       return x*sum; 
    }
};