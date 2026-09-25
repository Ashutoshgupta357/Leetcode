class Solution {
public:
    string makeGood(string s) {
        string arr="";
        for(int i=0;i<s.size();i++){
            if(arr.empty()){
                arr.push_back(s[i]);
            }
            else if(arr.back()==('A'+s[i]-'a') || arr.back()==('a'+s[i]-'A') ){
                arr.pop_back();
            }
            else{
                arr.push_back(s[i]);
            }
        }
        return arr;
    }
};