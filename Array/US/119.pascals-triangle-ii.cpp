/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> result;
        vector<int> last;
        for(int i = 0; i< rowIndex + 1; i++)
        {
            //for each row
            for (int j = 0; j<i+1; j++)
            {
                if (j == 0 || j == i)
                    last.push_back(1); //first and last elements
                else
                    last.push_back(result[j-1] + result[j]); //other elements
            }
            result = last;
            last.clear();
        }
        return result;
    }
};
// @lc code=end

