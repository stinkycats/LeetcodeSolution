/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        //replace nums1 elements
        for (int i = m; i<nums1.size(); i++)
            nums1[i] = nums2[i - m];
        //sort array
        sort(nums1.begin(), nums1.end());
    }
};
// @lc code=end

