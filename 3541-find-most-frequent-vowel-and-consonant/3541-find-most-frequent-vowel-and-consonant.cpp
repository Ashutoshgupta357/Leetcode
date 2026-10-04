class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);

        for(char c : s) {
            freq[c - 'a']++;
        }

        int vowel = 0;
        int consonant = 0;

        for(int i = 0; i < 26; i++) {
            char c = 'a' + i;

            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowel = max(vowel, freq[i]);
            else
                consonant = max(consonant, freq[i]);
        }

        return vowel + consonant;
    }
};