class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> x;
        vector<int> y;
        vector<int> s;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                x.push_back(nums[i]);
            else
                y.push_back(nums[i]);
        }

        sort(x.begin(), x.end());        
        sort(y.rbegin(), y.rend());      
        int a = 0, b = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                s.push_back(x[a++]);
            else
                s.push_back(y[b++]);
        }

        return s;
    }
};