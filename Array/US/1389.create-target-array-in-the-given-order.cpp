/*
 * @lc app=leetcode id=1389 lang=cpp
 *
 * [1389] Create Target Array in the Given Order
 */

// @lc code=start
class Solution 
{
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> result;
        for(int i = 0; i<index.size(); i++)
        {
            //insert elements nums[i] at index[i] position
            result.insert(result.begin() + index[i], 1, nums[i]);
        }
        return result;
    }
};
// @lc code=end

