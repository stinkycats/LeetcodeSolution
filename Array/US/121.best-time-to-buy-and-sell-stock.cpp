/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxprofit = 0;
        int minprice = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            //buy one when price is low enough
            minprice = min(minprice, prices[i]);
            
            //sell it when profit is maximum
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
};
// @lc code=end

