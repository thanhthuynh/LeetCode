class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        map = {}
        for n in nums:
            if n not in map:
                map[n] = 0
            map[n] += 1
            print(map)
        
        return max(map, key=map.get)
        