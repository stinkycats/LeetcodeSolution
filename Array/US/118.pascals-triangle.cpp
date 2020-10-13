/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        vector<int> temp;
        for(int i = 0; i<numRows; i++)
        {
            //for each row
            for (int j = 0; j<i+1; j++)
            {
                if (j == 0 || j == i)
                    temp.push_back(1); //first and last elements
                else
                    temp.push_back(result[i-1][j-1] + result[i-1][j]); //other elements
            }
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
};
// @lc code=end

