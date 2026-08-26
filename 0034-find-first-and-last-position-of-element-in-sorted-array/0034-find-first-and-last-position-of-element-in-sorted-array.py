class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:

        # Lower Bound
        low = 0
        high = len(nums) - 1
        first = len(nums)

        while low <= high:
            mid = (low + high) // 2

            if nums[mid] >= target:
                first = mid
                high = mid - 1
            else:
                low = mid + 1

        # Target present nahi hai
        if first == len(nums) or nums[first] != target:
            return [-1, -1]

        # Upper Bound
        low = 0
        high = len(nums) - 1
        last = len(nums)

        while low <= high:
            mid = (low + high) // 2

            if nums[mid] > target:
                last = mid
                high = mid - 1
            else:
                low = mid + 1

        return [first, last - 1]