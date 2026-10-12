
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        for(auto p : mp) {
            if(p.second > n / 4) {
                return p.first;
            }
        }

        return -1;
    }
};
