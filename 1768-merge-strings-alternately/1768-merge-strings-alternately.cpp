class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int x=word1.size();
        int y=word2.size();
        int i=0;
        int j=0;
            while(i<x || j<y){
            if(i<x){
            s.push_back(word1[i]);}
            if(j<y){
            s.push_back(word2[j]);}
            i++;
            j++;
        }
       
        return s;
    }
};