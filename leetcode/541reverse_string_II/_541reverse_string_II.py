class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        st = []
        for i in range(len(s)):
            if(i%k==0):
                    st.append(s[i:i+k])
        for j in range(len(st)):
            if(j%2==0):
                st[j]=st[j][::-1]
        st = ''.join(st)
        return st
c = Solution()
print(c.reverseStr("abcdef",3))

