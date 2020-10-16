/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution 
{
public:
    int findPeakElement(vector<int>& nums) 
    {
        //if nums has only one element
        if (nums.size() == 1)
            return 0;
        
        //if peek element is located at first element
        if (nums[0] > nums[1])
            return 0;
        
        //if peek element is located at last element
        if (nums[nums.size()-1] > nums[nums.size()-2])
            return nums.size()-1;
        
        //if peek element is located at other places
        for (int i = 1; i <nums.size()-1; i++)
        {
            if (nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

