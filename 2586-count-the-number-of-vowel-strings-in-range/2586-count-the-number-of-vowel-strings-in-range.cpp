class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            string s=words[i];
            int p=s.size()-1;
            if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u' )&& (s[p]=='a'||s[p]=='e'||s[p]=='i'||s[p]=='o'||s[p]=='u')){
                count++;
            }
        }
        return count;
    }
};