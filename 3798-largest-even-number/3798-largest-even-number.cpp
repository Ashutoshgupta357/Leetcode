class Solution {
public:
    string largestEven(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')==1){
                s.pop_back();
            }
            else{
                break;
            }
        }
        return s;
    }
};