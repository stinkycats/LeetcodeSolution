/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution 
{
public:
    int findMin(vector<int>& nums) 
    {
        for(int i = 0; i<nums.size()-1; i++)
        {
            //if (nums[i+1] - nums[i]) < 0, that will be a break point
            if ((nums[i+1] - nums[i]) < 0)
            {
                return nums[i+1];
            }
        }
        //if there're no break point, the first one is minimum
        return nums[0];
    }
};
// @lc code=end

