class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        vector<int>arr(26,0);
        for(int i=0;i<word.size();i++){
            arr[word[i]-'a']++;
        }
        sort(arr.rbegin(),arr.rend());
        for(int j=0;j<arr.size();j++){
            int p=((j/8)+1);
            count+=arr[j]*p;
        }
        return count;

    }
};