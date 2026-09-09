class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        long long base=1000;
       for (long long x =1; x <6; x++){
              ans += max(n - base + 1,(long long)0);
              base=base*1000;
       }
              return ans;

    }
};