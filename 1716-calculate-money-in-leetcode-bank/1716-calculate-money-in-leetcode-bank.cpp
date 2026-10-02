class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int p=1;
        int q=1;
        for(int i=1;i<=n;i++){
            
            sum=sum+p;
            p++;
            if(i%7==0){
                q=q+1;
                p=q;
            }
            
        }
        return sum;
    }
};