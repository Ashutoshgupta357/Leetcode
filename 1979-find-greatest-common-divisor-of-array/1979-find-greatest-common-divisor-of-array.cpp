class Solution {
public:
    int findGCD(vector<int>& arr) {
      int x=999999;
      int y=0;
      for(int i=0;i<arr.size();i++){
        x=min(arr[i],x);
        y=max(arr[i],y);
      }  
      return std::gcd(x,y);
    }
};