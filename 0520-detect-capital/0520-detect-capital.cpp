class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for(char ch : word) {
            if(isupper(ch)) {
                upper++;
            }
        }

        // All uppercase
        if(upper == word.size())
            return true;

        // All lowercase
        if(upper == 0)
            return true;

        // Only first letter uppercase
        if(upper == 1 && isupper(word[0]))
            return true;

        return false;
    }
};