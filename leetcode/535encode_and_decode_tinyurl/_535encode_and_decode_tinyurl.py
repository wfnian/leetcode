#encode and decode
#https://leetcode.com/problems/encode-and-decode-tinyurl/description/
"""
usage of base64
////////////////////////////////////////////////////////////////////
#coding:gbk
import base64

string = 'hello,world 1 +-你好'

def main():
    #转成bytes string
    bytesString = string.encode(encoding="utf-8")
    print(bytesString)

    #base64 编码
    encodestr = base64.b64encode(bytesString)
    print(encodestr)
    print(encodestr.decode())

    #解码
    decodestr = base64.b64decode(encodestr)
    print(decodestr.decode())

if __name__ == '__main__':
    main()


b'hello,world 1 +-\xe4\xbd\xa0\xe5\xa5\xbd'
b'aGVsbG8sd29ybGQgMSArLeS9oOWlvQ=='
aGVsbG8sd29ybGQgMSArLeS9oOWlvQ==
hello,world 1 +-你好
"""

import base64 as b4
class Codec:
    def encode(self, longUrl):
        """Encodes a URL to a shortened URL.
        :type longUrl: str
        :rtype: str
        """
        return b4.encodestring(longUrl)
    def decode(self, shortUrl):
        """Decodes a shortened URL to its original URL.
        :type shortUrl: str
        :rtype: str
        """
        return b4.decodestring(shortUrl)
# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))