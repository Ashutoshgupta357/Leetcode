class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        for(int i=1;i<=8;i++){
            int sum=0;
            for(int j=i;j<=9;j++){
                sum=sum*10 +j;
                if(sum>=low && sum<=high){
                    arr.push_back(sum);
                }
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};