/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        //sort array
        sort(nums.begin(), nums.end());
        //return half size value because majority element appears more than ⌊ n/2 ⌋ times
        return nums[nums.size()/2];
    }
};
// @lc code=end

