/*
 * @lc app=leetcode.cn id=1534 lang=cpp
 *
 * [1534] 统计好三元组
 */

// @lc code=start
class Solution 
{
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) 
    {
        int result = 0;
        //ergotic i,j,k
        for(int i = 0; i<arr.size(); i++)
        {
            for(int j = i + 1; j<arr.size(); j++)
            {
                for(int k = j + 1; k<arr.size(); k++)
                {
                    //judge condition
                    if(   abs(arr[i] - arr[j])<= a
                       && abs(arr[j] - arr[k])<= b
                       && abs(arr[i] - arr[k])<= c)
                    {
                        result ++;
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end

