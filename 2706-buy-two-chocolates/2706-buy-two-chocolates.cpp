class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1 = INT_MAX;
        int m2 = INT_MAX;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < m1) {
                m2 = m1;
                m1 = prices[i];
            }
            else if(prices[i] < m2) {
                m2 = prices[i];
            }
        }

        int p = m1 + m2;

        if(p <= money) {
            return money - p;
        }

        return money;
    }
};