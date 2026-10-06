class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digitsum=0;
        int digit=x;
        while(digit>0){
            digitsum+=digit%10;
            digit=digit/10;
        }
        if(x%digitsum==0){
            return digitsum;
        }
        return -1;
    }

};