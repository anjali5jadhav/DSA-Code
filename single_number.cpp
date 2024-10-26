// Single Number

//Example 1:
//
//Input: nums = [2,2,1]
//Output: 1
//Example 2:
//
//Input: nums = [4,1,2,1,2]
//Output: 4
//Example 3:
//
//Input: nums = [1]
//Output: 1


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        for (int i=0;i<nums.size();++i)
        result ^= nums[i];
        return result;
    }
};
