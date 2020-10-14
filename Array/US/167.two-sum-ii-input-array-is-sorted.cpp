/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        //new hash map
        unordered_map<int, int> imap;
        for (int i = 0; ; i++) 
        {
            //detect key if exist
            auto it = imap.find(target - numbers[i]);
            //if exist, return hash value
            if (it != imap.end()) 
                return vector<int> {it->second+1, i+1};
            //else, continue to construct the map
            imap[numbers[i]] = i;
        }
    }
};
// @lc code=end

