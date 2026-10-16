class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            vector<int>temp;
            int a=0;
            for(int j=i;j<arr.size();j++){
                temp.push_back(arr[j]);
                a=a+arr[j];
                if(temp.size()%2==1){
                    sum=sum+a;
                }


            }
        }
        return sum;
    }
};