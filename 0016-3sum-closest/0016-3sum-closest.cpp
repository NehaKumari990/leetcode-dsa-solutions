class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                // Agar current sum target ke zyada close hai
                if (abs(sum - target) < abs(closest - target)) {
                    closest = sum;
                }

                // Exact target mil gaya
                if (sum == target) {
                    return sum;
                }

                // Sum chhota hai → bada karna hai
                if (sum < target) {
                    left++;
                }
                // Sum bada hai → chhota karna hai
                else {
                    right--;
                }
            }
        }

        return closest;
    }
};