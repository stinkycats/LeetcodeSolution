/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> Subscript;
        //brute force attack
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                //judge if sum of nums equal to target
                if(nums[i]+nums[j] == target)
                {
                    Subscript.push_back(i);
                    Subscript.push_back(j);
                    break;
                }
            }
        }
        return Subscript;


        
        // //new hash map
        // unordered_map<int, int> imap;
        // for (int i = 0; ; i++) 
        // {
        //     //detect key if exist
        //     auto it = imap.find(target - nums[i]);
        //     //if exist, return hash value
        //     if (it != imap.end()) 
        //         return vector<int> {it->second, i};
        //     //else, continue to construct the map
        //     imap[nums[i]] = i;
        // }
    }
};
// @lc code=end

