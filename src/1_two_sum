class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums_copy, ret;
        nums_copy.assign(nums.begin(), nums.end());
        sort(nums_copy.begin(), nums_copy.end());
        
        int low = 0, hi = nums.size() - 1, x, y;
        while (low != hi) {
            if (nums_copy[low] + nums_copy[hi] < target) {
                low += 1;
            }
            else if (nums_copy[low] + nums_copy[hi] > target) {
                hi -= 1;
            }
            else {
                x = nums_copy[low];
                y = nums_copy[hi];
                break;
            }
        }
        for (int i=0; i<nums.size();i++) {
            if (nums[i] == x | nums[i] == y) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};