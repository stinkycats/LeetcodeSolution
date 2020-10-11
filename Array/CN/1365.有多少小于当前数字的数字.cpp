/*
 * @lc app=leetcode.cn id=1365 lang=cpp
 *
 * [1365] 有多少小于当前数字的数字
 */

// @lc code=start
class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> result(nums.size(), 0);
        
        //sort and return index
        vector<int> sortedindex;
        for(int i = 0; i<nums.size(); i++)
        {
            sortedindex.push_back(i);
        }
        
        sort(sortedindex.begin(), sortedindex.end(),
			[&nums](int i1, int i2) {return nums[i1] < nums[i2]; });
        
        //find numbers in accending order
        for(int i = 1; i<nums.size(); i++)
        {
            int samenum = 0;
            for(int j = 0; j<i+1; j++)
            {
                //accept only when j numbers is smaller than i numbers
                if (nums[sortedindex[j]] < nums[sortedindex[i]])
                {
                    samenum += 1;
                }
            }
            result[sortedindex[i]] = samenum;
        }
        
        return result;


        
        // vector<int>a(101);
        // vector<int>b(101);
        // int n=nums.size();
	    
        // for(int i=0;i<n;i++)  // making the frequency array
        // {
        //     a[nums[i]]++;
        // }

        // for(int i=1;i<101;i++)  //filling the prefix sum array
        // {
        //     b[i]=b[i-1]+a[i-1];
        // }

        // vector<int>ans(n);  // final solution array
        // for(int i=0;i<n;i++)
        // {
        //     ans[i]=b[nums[i]];
        // }
        // return ans;
    }
};
// @lc code=end

