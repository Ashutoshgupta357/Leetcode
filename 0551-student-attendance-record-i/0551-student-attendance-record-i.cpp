class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        int p=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                count++;
                p=0;
            }
            else if(s[i]=='L'){
                p++;
            }
            else{
                p=0;
            }
            if(p==3){
                return false;
            }


        }
        if(count>=2){
            return false;
        }
        return true;
    }
};