"""////////////////////////////////////////////////////////////
Initially, there is a Robot at position (0, 0). Given a sequence
of its moves, judge if this robot makes a circle, which means it 
moves back to the original place.

Note: L :left
      R :right
      U :up
      D :down
////////////////////////////////////////////////////////////"""
class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        moves = list(moves)
        u = moves.count('U')
        d = moves.count('D')
        l = moves.count('L')
        r = moves.count('R')
        return u==d and l == r
a = Solution()
print(a.judgeCircle("UD"))
print(a.judgeCircle("RLUURDDDLU"))  #测试用例
print(a.judgeCircle("DURDLDRRLL"))
print(a.judgeCircle("UUUUUDDD"))

