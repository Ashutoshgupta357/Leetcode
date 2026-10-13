class Solution {
public:
    int maximumValue(vector<string>& strs) {
       
        int m=INT_MIN;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            bool n=false;
            bool x=false;
            for(int j=0;j<s.size();j++){
                if(isalpha(s[j])){
                    x=true;
                }
                else if(isdigit(s[j])){
                    n=true;
                }

            }
            if(x==true && n==true || x==true && n==false){
                m=max(m,int(s.size()));

            }
            else{
                m=max(m,stoi(s));
            }
        }
        return m;
    }
};