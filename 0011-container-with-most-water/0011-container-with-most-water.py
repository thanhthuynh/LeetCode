class Solution(object):
    def maxArea(self, height):
        l, r, area = 0, len(height) - 1, 0
        while l < r:
            minHeight=min(height[l], height[r])
            area = max(area, (r - l) * minHeight)
            if height[l] < height[r]:
                l+=1
                while height[l] < minHeight:
                    l+=1
            else:
                r-=1
                while height[r]<minHeight:
                    r-=1			
        return area