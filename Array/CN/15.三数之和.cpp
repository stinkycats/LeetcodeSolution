/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        // vector<vector<int>> triplets;
        // vector<vector<int>> result;
        // if (nums.size() < 3)
        // {
        //     return result;
        // }
        // else
        // {
        //      //ergotic i,j,k
        //     for(int i = 0; i<nums.size(); i++)
        //         for(int j = i + 1; j<nums.size(); j++)
        //             for(int k = j + 1; k<nums.size(); k++)
        //                 //judge condition
        //                 if(nums[i] + nums[j] + nums[k] == 0)
        //                     triplets.push_back({nums[i],nums[j],nums[k]});

        //     if (triplets.size() > 1)
        //     {
        //         vector<int> temp1;
        //         vector<int> temp2;
        //         //find duplicate triplets
        //         for(int i = 0; i<triplets.size()-1; i++)
        //         {
        //             temp1 = triplets[i];
        //             temp2 = triplets[i+1];
        //             if (find(temp2.begin(), temp2.end(), temp1[0]) != temp2.end() 
        //              && find(temp2.begin(), temp2.end(), temp1[1]) != temp2.end()
        //              && find(temp2.begin(), temp2.end(), temp1[2]) != temp2.end())
        //             {
        //                 result.push_back(temp1);
        //             }
        //             else
        //             {
        //                 result.push_back(temp1);
        //                 result.push_back(temp2);
        //             }
        //         }
        //     }
        //     return result;
        // }


        std::vector<vector<int>> result;
        if (nums.empty()) 
            return result;
        int n_size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n_size; ++i) 
        {
            // all numbers from now on will be greater than 0, no point in continuing
            if (nums[i] > 0) break;

            // we have seen this number & combo before; skip
            if (i > 0 and nums[i] == nums[i-1]) 
                continue;

            int left = i+1, right = n_size - 1;
            while (left < right) 
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) 
                {
                    ++left;
                } 
                else if (sum > 0) 
                {
                    --right;
                } 
                else 
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    int last_left = nums[left], last_right = nums[right];
                    // we have seen this number & combo before; skip
                    while (left < right && nums[left] == last_left) 
                        ++left;
                    while (left < right && nums[right] == last_right) 
                        --right;
                }
            }
        }
        return result;
    }
};
// @lc code=end

