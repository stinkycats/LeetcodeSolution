/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
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


        // int len = nums.size();
        // int j = 0;
        // for(int i = 0; i < len; i++)
        // {
        //     if(nums[i] != val)
        //     {
        //        nums[j++] = nums[i];
        //     }
        // }
        // return j;
    }
};
// @lc code=end

