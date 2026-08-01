class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x=0;
        int j=0;
    
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                j=i;
                break;
            }
            else if(i>word.size()){
                return word;
            }
        }

         while(x<j){
            swap(word[x],word[j]);
            x++;
            j--;
         }

         return word;   
        

    }
};