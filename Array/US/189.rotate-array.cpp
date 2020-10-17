/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> result(nums.size(),0);
        
        //rotate by exact division
        for(int i = 0; i<nums.size(); i++)
            result[(i + k) % nums.size()] = nums[i];
        
        nums = result;


        // void reverse(vector<int>& nums, int begin, int end)
        // {
        //     int i, temp;
        //     for (i = 0; i<(end - begin + 1) / 2; i++)
        //     {
        //         temp = nums[begin + i];
        //         nums[begin + i] = nums[end - i];
        //         nums[end - i] = temp;
        //     }
        // }

        // void rotate(vector<int>& nums, int k)
        // {
        //     //reverse whole array
        //     reverse(nums, 0, nums.size() - 1);
            
        //     //reverse first k elements
        //     reverse(nums, 0, k - 1);
            
        //     //reverse remain elements
        //     reverse(nums, k, nums.size() - 1);
        // }
    }
};
// @lc code=end

