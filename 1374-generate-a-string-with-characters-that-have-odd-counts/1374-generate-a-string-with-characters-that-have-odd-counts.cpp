class Solution {
public:
    string generateTheString(int n) {
        
        string s="";
        while(s.size()!=n){
            s.push_back('a');
        }
        if(n%2==0){
            s.pop_back();
           s.push_back('b');
           return s;
        }
        
            return s;
        
    }
};