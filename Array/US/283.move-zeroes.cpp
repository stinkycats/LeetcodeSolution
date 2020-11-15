/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        //calculate zeros numbers
        int zerosnum = count(nums.begin(),nums.end(),0);
        //remove zeros
        remove(nums.begin(), nums.end(), 0);
        //revalue nums
        for (int i = nums.size()-zerosnum; i<nums.size(); i++)
            nums[i] = 0;
    }
};
// @lc code=end

