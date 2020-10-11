/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution 
{
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int goodpairsnum = 0;
        //brute force attack
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                //judge if a good pairs
                if(nums[i] == nums[j] && i < j)
                {
                    goodpairsnum += 1;
                }
            }
        }
        return goodpairsnum;
    }
};
// @lc code=end

