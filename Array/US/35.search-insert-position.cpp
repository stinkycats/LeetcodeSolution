/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
		int pos = 0;
		for (int i = 0; i<nums.size(); i++)
		{
			if (nums[i] < target)
				pos++;
		}
		return pos;


        // vector<int>::iterator lower; 
        // lower = lower_bound (nums.begin(), nums.end(), target); 
        // return (lower-nums.begin());
    }
};
// @lc code=end

