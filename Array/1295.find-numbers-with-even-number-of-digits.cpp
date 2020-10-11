/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution 
{
public:
    int findNumbers(vector<int>& nums) 
    {
        int result = 0;
        //ergotic array
        for(int i = 0; i<nums.size(); i++)
        {
            int digitsnum = 0;
            int val = nums[i];
            //calculate digits num of current numbers
            while(val)
            {
                val /= 10;
                digitsnum ++;
            }

            //if digits num is even, accumulate
            if(!(digitsnum % 2))
            {
                result ++;
            }
        }
        return result;
    }
};
// @lc code=end

