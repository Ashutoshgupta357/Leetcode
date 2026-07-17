class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<j && arr[i]<arr[i+1]){
            i++;}
            if(i==0||i==j){
                return false;
            }
        
        while(i<j && arr[i]>arr[i+1]){
            i++;
        }
        return i==j;
    }
};