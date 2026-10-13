class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        if(n%2!=0){
            arr.push_back(0);
            n--;
        }
        int i=1;
        while(n>0){
            
                arr.push_back(i);
                arr.push_back(-i);
                i++;
                n=n-2;
            }
        
        return arr;
    }
    
};