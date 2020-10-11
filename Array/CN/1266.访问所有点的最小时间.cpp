/*
 * @lc app=leetcode.cn id=1266 lang=cpp
 *
 * [1266] 访问所有点的最小时间
 */

// @lc code=start
class Solution 
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int result = 0;
        vector<int> srcpoint;
        vector<int> destpoint;
        vector<int> floatpoint;
        for(int i = 0; i<points.size() - 1; i++)
        {
            srcpoint = points[i];
            destpoint = points[i + 1];
            floatpoint = srcpoint;
            //calculate directional vector
            int stepx = (destpoint[0] - srcpoint[0] > 0)? 1:-1;
            int stepy = (destpoint[1] - srcpoint[1] > 0)? 1:-1;
            //move point in diagonally direction
            while((floatpoint[0] != destpoint[0]) && (floatpoint[1] != destpoint[1]))
            {
                floatpoint[0] += stepx;
                floatpoint[1] += stepy;
                result ++;
            }
            //move point in vertically direction
            while((floatpoint[0] == destpoint[0]) && (floatpoint[1] != destpoint[1]))
            {
                floatpoint[1] += stepy;
                result ++;
            }
            //move point in horizontally  direction
            while((floatpoint[0] != destpoint[0]) && (floatpoint[1] == destpoint[1]))
            {
                floatpoint[0] += stepx;
                result ++;
            }
        }
        return result;


        // int result = 0;
        // for(int i = 0; i < points.size()-1; i++)
        // {
        //     result += max(abs(points[i+1][0] - points[i][0]), abs(points[i+1][1] - points[i][1]));
        // }
        // return result;
    }
};
// @lc code=end

