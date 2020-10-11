/*
 * @lc app=leetcode.cn id=1470 lang=cpp
 *
 * [1470] 重新排列数组
 */

// @lc code=start
class Solution 
{
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> result;
        //split in half size
        for (int i = 0; i<n; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[n + i]);
        }
        return result;
    }
};
// @lc code=end

