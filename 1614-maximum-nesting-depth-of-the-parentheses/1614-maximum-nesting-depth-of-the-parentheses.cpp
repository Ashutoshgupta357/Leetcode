class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        int x=0;
       for(char i:s){
        if(i=='(') m++;
        if(i==')') m--;
        x=max(x,m);
       }
       return x;
    }
};