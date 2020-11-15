/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        unordered_map<int,int> imap;
        //initalize first map
        for(int i=0;i<nums.size()+1;i++)
            imap[i]=0;
        
        //make the exist number location to one
        for(int i=0;i<nums.size();i++)
            imap[nums[i]]++;
        
        //get result
        int result;
        for(int i=0;i<imap.size();i++)
            if(imap[i]==0)
                result=i;
        
        return result;
    }
};
// @lc code=end

