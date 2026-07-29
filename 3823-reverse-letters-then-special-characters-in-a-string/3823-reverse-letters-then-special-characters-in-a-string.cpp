class Solution {
public:
    string reverseByType(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!isalpha(s[i])){
                i++;
            }
            else if(!isalpha(s[j])){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        j=s.size()-1;
        i=0;
         while(i<j){
            if(isalpha(s[i])){
                i++;
            }
            else if(isalpha(s[j])){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;


    }
};