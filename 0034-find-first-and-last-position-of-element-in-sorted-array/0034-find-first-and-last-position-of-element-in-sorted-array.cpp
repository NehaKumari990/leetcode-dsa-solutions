class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        // Lower Bound
        int low = 0;
        int high = nums.size() - 1;
        int first = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                first = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // Target present nahi hai
        if (first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }

        // Upper Bound
        low = 0;
        high = nums.size() - 1;
        int last = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                last = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {first, last - 1};
    }
};