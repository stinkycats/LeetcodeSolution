/*
 * @lc app=leetcode.cn id=1313 lang=cpp
 *
 * [1313] 解压缩编码列表
 */

// @lc code=start
class Solution 
{
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<int> result;
        //ergotic to get freq and val
        for (int i = 0; i<nums.size()/2; i++)
        {
            int freq = nums[2*i];
            int val  = nums[2*i + 1];
            //push to stack
            for (int j = 0; j<freq; j++)
            {
                result.push_back(val);
            }
        }
        return result;
    }
};
// @lc code=end

