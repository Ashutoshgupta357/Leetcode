class Solution {
public:
    string truncateSentence(string s, int k) {
        int p=0;
        string a="";
        for(int i=0;i<s.size();i++){
            
            a=a+s[i];
            if(s[i]==' '){
                p++;
            }
            if(p==k){
                if(a.back()==' '){
                    a.pop_back();
                }
                break;
            }
            
        }
        return a;
    }
};