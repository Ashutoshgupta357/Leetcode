class Solution {
public:
    int secondsBetweenTimes(string x, string y) {
        int h1=(x[0]-'0')*10+(x[1]-'0');
        int m1=(x[3]-'0')*10+(x[4]-'0');
         int s1=(x[6]-'0')*10+(x[7]-'0');
         int h2=(y[0]-'0')*10+(y[1]-'0');
        int m2=(y[3]-'0')*10+(y[4]-'0');
         int s2=(y[6]-'0')*10+(y[7]-'0');
         int t1=(h1*3600)+(m1*60)+s1;
          int t2=(h2*3600)+(m2*60)+s2;
          return abs(t2-t1);
         

       
       
         

    }
};