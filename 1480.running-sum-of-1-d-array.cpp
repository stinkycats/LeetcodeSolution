/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> result;
        for(int i = 0; i<nums.size(); i++)
        {
            //run sum of array
            int sum = 0;
            for(int j = 0; j<i+1; j++)
            {
                sum += nums[j];
            }
            //push back result
            result.push_back(sum);
        }
        return result;



        // int i = 1;
        //  while (i<nums.size())
        //  {
        //      nums[i]+=nums[i-1];
        //      i++;
        //  }
        //  return nums;
    }
};
// @lc code=end

