// ******** Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one repeated number in nums, return this repeated number. You must solve the problem without modifying the array nums and uses only constant extra space. ********

// <======== Example ========>
// Input: nums = [1,3,4,2,2]
// Output: 2

// Input: nums = [3,1,3,4,2]
// Output: 3




class Solution{
  public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[abs(nums[i])-1] > 0) {
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            }
            else {
                return abs(nums[i]);
            }
        }

        return -1;
    }
};