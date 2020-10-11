/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution 
{
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int result = 0;
        //calculate sub array numbers
        for(int len = 1; len<=arr.size(); )
        {
            //sub array subscript range from 0 to arr.size()-len
            for(int j = 0; j<=arr.size()-len; j++)
            {
                //sum each sub array
                for(int k = 0; k<len; k++)
                {
                    result += arr[j+k];
                }
            }
            //next odd-length
            len += 2;
        }
        return result;



        // int res = 0, n = A.size();
        // for (int i = 0; i < n; ++i) 
        // {
        //     res += ((i + 1) * (n - i) + 1) / 2 * A[i];
        // }
        // return res;
    }
};
// @lc code=end

