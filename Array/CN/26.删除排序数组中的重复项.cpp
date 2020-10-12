/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.empty())
            return 0;

        int result = 1;
        int lastnum = nums[0];
        int temp;
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i] == lastnum)
                continue;
            else
            {
				result++;

				//update last num
				lastnum = nums[i];

				//exchange nums pos
				temp = nums[result - 1];
				nums[result - 1] = nums[i];
				nums[i] = temp;
            }
        }
        return result;
    }
};
// @lc code=end

