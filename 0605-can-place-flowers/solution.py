class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        for index, element in enumerate(flowerbed):
            if n == 0:
                return True
            flower = not element
            if index > 0:
                flower = flower and not flowerbed[index - 1]
            if index + 1 < len(flowerbed):
                flower = flower and not flowerbed[index + 1]
            if flower:
                flowerbed[index] = 1
                n-=1
        return n <= 0
        
