class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        find = 0
        for num in nums:
            find ^= num
        return find

        