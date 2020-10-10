/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> result;
        //find max candy nums in array
        vector<int> temp(candies);
        sort(temp.begin(), temp.end());
        int maxcandynum = temp[temp.size()-1];

        //ergotic for judgement
        for (int i = 0; i<candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= maxcandynum)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};
// @lc code=end

