database = [
    ['王晓方','1'],
    ['王方年','2'],
    ['www','3'],
    ['哈哈哈','4'],
    ['任溶溶','5']
    ]
while 1:
    username = input("请输入用户名")
    pin = input("请输入用户号码")
    if[username,pin]in database:print("录入成功")
    else : print("失败")
