class Solution {
public:
    int countTestedDevices(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                count++;

                for(int j=i+1;j<arr.size();j++){
                    arr[j]--;
                }


            }
            else{
                continue;
            }

        }
        return count;
    }
};