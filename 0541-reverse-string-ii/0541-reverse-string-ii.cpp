class Solution {
public:
    string reverseStr(string s, int k) {
        
        int p=s.size()-1;
        for(int i=0;i<s.size();i+=2*k){
            int x=i;
            int y=std::min(i+k-1,p);
            while(x<y){
                swap(s[x],s[y]);
                x++;
                y--;
            }
        }
        return s;
    }
};