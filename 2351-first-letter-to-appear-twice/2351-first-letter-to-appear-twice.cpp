class Solution {
public:
    char repeatedCharacter(string s) {
      vector<int>ans(26,0);
      for(char c:s){
        ans[c-'a']++;
        if(ans[c-'a']==2){
            return c;
        }
      }  
      return ' ';
    }
};