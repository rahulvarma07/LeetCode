class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
        if len(nums) == 0:
            return 0
        elif (len(nums)==1):
            if nums[0] == val:
                return 0
            else:
                return 1
        while(i < len(nums)):
            if nums[i] == val:
                del nums[i]
            else:
                i += 1
        return len(nums)
