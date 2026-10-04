class Solution {
public:
    string trimTrailingVowels(string s) {
        int p=s.size()-1;
       for(int i=p;i>=0;i--){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            s.pop_back();
        }
        else break;
       }

        return s;
        }
};