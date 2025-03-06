class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt = 1
        elem = nums[0]
        for i in range(1, len(nums)):
            if(nums[i] == elem):
                cnt += 1
            elif(nums[i] != elem):
                cnt -= 1
                if(cnt == 0):
                    elem = nums[i]
                    cnt = 1
        return elem  