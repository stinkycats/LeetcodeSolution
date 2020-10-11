/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        //merge vector
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        //sort vector
        sort(nums1.begin(), nums1.end());

        const int arraysize = nums1.size();
        if(!(arraysize % 2))
            return 0.5*(nums1[arraysize/2-1] + nums1[arraysize/2]);
        else
            return nums1[(arraysize - 1)/2];
    }
};
// @lc code=end

