#include <algorithm>
#include<array>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minSoFar = prices[0];
        for(int i = 0;i<prices.size();i++){
            minSoFar = min(minSoFar,prices[i]);
            int profit = prices[i]-minSoFar;
            max_profit = max(max_profit,profit);
        }
        return max_profit;
    }
};