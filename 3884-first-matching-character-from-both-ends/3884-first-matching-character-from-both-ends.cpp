class Solution {
public:
    int firstMatchingIndex(string s) {
        int i=0;
        int n=s.size();
        int j=s.size()-1;
        while(i<=j){
            if(s[i] == s[n - i - 1]){
                return i;
            }
            else{
                j--;
                i++;
            }
        }
        return -1;
    }
};