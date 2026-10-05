class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false;
        bool heavy=false;
        if(length>=10000 ||width>=10000||height>=10000){
            bulky=true;
        }
        long long v=1LL*length*width*height;
        if(v >= 1000000000){
            bulky=true;
        }
        if(mass>=100){
            heavy=true;
        }
        if(bulky && heavy){
            return "Both";
        }
        else if(bulky && !heavy){
            return "Bulky";
        }
        else if(!bulky && !heavy){
            return "Neither";
        }
        else{
            return "Heavy";
        }


    }
};