/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int closestval = 0;
        int minval = INT_MAX;
        //ergotic i,j,k
        for(int i = 0; i<nums.size(); i++)
            for(int j = i + 1; j<nums.size(); j++)
                for(int k = j + 1; k<nums.size(); k++)
                    //judge condition
                    if(abs((nums[i] + nums[j] + nums[k]) - target) <= minval)
                    {
                        minval = abs((nums[i] + nums[j] + nums[k]) - target);
                        closestval = (nums[i] + nums[j] + nums[k]);
                    }
        return closestval;
    }
};
// @lc code=end

