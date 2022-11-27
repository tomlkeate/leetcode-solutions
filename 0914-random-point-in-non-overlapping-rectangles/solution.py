import random
class Solution:

    def __init__(self, rects: List[List[int]]):
        self.list_of_rects = rects
        self.probs = []
        self.rectangle_areas = []
        self.total_area = 0
        for i, rect in enumerate(rects):
            print(rect)
            self.rectangle_areas.append((rect[2] - rect[0] + 1)*(rect[3] - rect[1] + 1))
            self.total_area += self.rectangle_areas[i]
        for i in accumulate(self.rectangle_areas):
            self.probs.append(i/self.total_area)
    def pick(self) -> List[int]:
        location = bisect.bisect(self.probs, random.random())
        x1, y1, x2, y2 = self.list_of_rects[location]
        return (random.randint(x1, x2), random.randint(y1, y2))

# Your Solution object will be instantiated and called as such:
# obj = Solution(rects)
# param_1 = obj.pick()
