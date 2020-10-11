/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int Area = 0;
        int h = 0;
        int i=0;
        int j=height.size()-1;
        //ergotic each sub-region
        while(i<j)
        {
            h = min(height[i], height[j]);
            //update area value
            Area = max(Area, h*(j-i));
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return Area;
    }
};
// @lc code=end

