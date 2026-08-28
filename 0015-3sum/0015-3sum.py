class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums1 = []
        nums.sort()
        n = len(nums)
        for i in range(n-1):
            # duplicate first value element skip
            if(i>0 and nums[i]==nums[i-1]):
                continue
            left = i + 1
            right = n - 1
            while(left<right):
                sum = nums[i] + nums[left] + nums[right]

                if(sum==0):
                    nums1.append([nums[i],nums[left],nums[right]])

                    # duplicate left value skip
                    while(left<right and nums[left]==nums[left+1]):
                        left += 1
                    
                    # duplicate right value skip
                    while(left<right and nums[right]==nums[right-1]):
                        right -= 1
                    left += 1
                    right -= 1

                elif (sum<0):
                    left += 1
                
                else:
                    right -= 1
        return nums1


            


        