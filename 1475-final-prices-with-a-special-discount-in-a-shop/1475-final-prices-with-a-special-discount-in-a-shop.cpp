class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        for(int i=0;i<prices.size()-1;i++){
            int discount=0;
            
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    discount=prices[j];
                    break;
                }
                else{
                    discount=0;
                }
            }
            
                    prices[i]=prices[i]-discount;
                
                
        }
        return prices;
    }
};