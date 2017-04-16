class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        st = []
        s = s.split(' ')
        for i in s:
            i = list(i)
            i.reverse()
            st.append(''.join(i))
        return ' '.join(st)
print(Solution().reverseWords("Let's take LeetCode contest"))
