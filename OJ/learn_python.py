>>> a = input("please input a alephone:")[2]
please input a alephone:awsfd
>>> a
's'
>>>


>>> a = [0,1,2,3,4,5,6,7,8]
>>> a[0:3 ]
[0, 1, 2]

>>> a = "hello"
>>> a[0]
'h'
>>>


url = input("please input the url:")
domain = url[4:-4]
print(domain)
 
>>>www.baidu.com
>>>baidu


>>> a = [1,2,3,4,5,6,7,8,9,10]
>>> a[0:2]
[1, 2]
>>> a[0:10]
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
>>> a[0:10:2]
[1, 3, 5, 7, 9]
>>> a[::4]
[1, 5, 9]

database = [
    ['a','1'],
    ['v','2'],
    ['www','3'],
    ['哈','4'],
    ['任溶溶','5']
    ]
while 1:
    username = input("请输入用户名")
    pin = input("请输入用户号码")
    if[username,pin]in database:print("录入成功")
    else : print("失败")
