// Maximum Subarray

// Given an integer array nums , find the subarray with the largest sum, and retum its sum.

// Example 1:
// Input: nums -
// Output: 6
// Explanation:
// The subarray [4,—1,2,1] has the largest sum 6.
// Example 2:
// Input: nums
// Output :
// 1
// Explanation:
// The subarray [1] has the largest sum 1.

// Kadane's Algorithm

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            // step1
            sum += nums[i];
            // step2
            maxi = max(sum, maxi);
            // step3
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};