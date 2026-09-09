class Solution:
    def canMeasureWater(self, x: int, y: int, target: int) -> bool:
        # Python 3
        return target == 0 or (x + y >= target and target % math.gcd(x, y) == 0)