class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int x=1;
        int y=n;
        while(y>0){
            x=x*(y%10);
            y=y/10;
        }

        if(x%t==0){
            return n;
        }
        n++;
    
        }
    }
};