#   `arr` just like:
#   ```
#   ['1', '2', '4', '8', '16', '23', '46', '128', '256', '125', '0124', '0248', '0469', '1289', '13468',
#    '23678', '35566', '011237', '122446', '224588', '0145678', '0122579', '0134449', '0368888', '11266777',
#     '23334455', '01466788', '112234778', '234455668', '012356789', '0112344778']
#   ```
#   then we check if the input in `arr`
#   ```
#   class Solution:
#       @staticmethod
#       def srt(num):
#           return ''.join(sorted(num))

#      def reorderedPowerOf2(self, N):
#           """
#           :type N: int
#           :rtype: bool
#           """
#           arr = list(map(self.srt, map(str, [2 ** i for i in range(31)])))
#           return self.srt(str(N)) in arr

#```
class Solution:
    @staticmethod
    def srt(num):
        return ''.join(sorted(num))

    def reorderedPowerOf2(self, N):
        """
        :type N: int
        :rtype: bool
        """
        arr = list(map(self.srt, map(str, [2 ** i for i in range(31)])))
        return self.srt(str(N)) in arr


s = Solution()
print(s.reorderedPowerOf2(46))

