class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ans(26,0);
        for(int i=0;i<magazine.size();i++){
            ans[magazine[i]-'a']++;

        }
        for(int i=0;i<ransomNote.size();i++){
            int p=ransomNote[i]-'a';
            
            if(ans[p]==0){
                return false;
            }
            else if(ans[p]!=0) ans[p]--;
            
        }
        return true;
    }
};