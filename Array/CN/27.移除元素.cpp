/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector <int>::iterator Iter;
		for (Iter = nums.begin(); Iter != nums.end(); )
		{
			//judge condiction
			if (*Iter == val)
				Iter = nums.erase(Iter); //already point to next element
			else
				Iter++;
		}
		return nums.size();
    }
};
// @lc code=end

