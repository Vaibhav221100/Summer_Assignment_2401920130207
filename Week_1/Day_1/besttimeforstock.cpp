#include<vector>
using namespace std;
//best time to buy and sell stock 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int bestProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int currentProfit = prices[i] - lowestPrice;

            if (currentProfit > bestProfit) {
                bestProfit = currentProfit;
            }

            if (prices[i] < lowestPrice) {
                lowestPrice = prices[i];
            }
        }

        return bestProfit;
    }
};
