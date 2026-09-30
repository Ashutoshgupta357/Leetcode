class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>ans={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string y="";
            for(int i=0;i<s.size();i++){
                int p=s[i]-'a';
                y=y+(ans[p]);

            }
            words[i]=y;
        }
        set<string>s(words.begin(),words.end());
        int x=s.size();
        return x;


    }
};