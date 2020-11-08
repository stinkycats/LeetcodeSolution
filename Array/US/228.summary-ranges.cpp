/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution 
{
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int i = 0;
        vector<string> res;
        while(i < nums.size())
        {
            string k = to_string(nums[i]);
            int j = i;

            while(j + 1 < nums.size() && nums[j] + 1 == nums[j + 1]) j++;

            if(i != j)  k += "->" + to_string(nums[j]);
            res.push_back(k);
            i = j + 1;
        }
        return res;
    }
};
// @lc code=end

