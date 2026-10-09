class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==(s[i+1]-'A'+'a') || s[i]==(s[i+1]-'a'+'A') || s[i]==s[i+1]){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};