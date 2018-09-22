
# Overview ![](https://img.shields.io/badge/property-personal%20repository-brightgreen.svg)


***This repository include two main parts:***
 
> ***1.leetcode program by myself***   [Leetcode,click to leetcode](https://leetcode.com/problemset/algorithms/) 
![Travis (.org) branch](https://img.shields.io/badge/build-running-brightgreen.svg)


> ***~~2. oj of buct(Beijing University of chemical technology)~~*** ![](https://img.shields.io/badge/status-deleted-red.svg)
# Tag 
  ![](https://img.shields.io/badge/label-LeetCode-brightgreen.svg) ![](https://img.shields.io/badge/label-DataStructer-green.svg)  ![](https://img.shields.io/badge/label-Algorithm-orange.svg) 

 ![](https://img.shields.io/badge/language-C-blue.svg) ![](https://img.shields.io/badge/language-CPP-blue.svg) ![](https://img.shields.io/badge/language-Java-blue.svg) ![](https://img.shields.io/badge/language-Python-blue.svg)

# About Title formalize
|用法一|用法二|
|--|--|
|![](https://github.com/wfnian/Programming_Language/blob/master/sundry/1.jpg?raw=true)|![](https://github.com/wfnian/Programming_Language/blob/master/sundry/2.jpg?raw=true)|
|加入path更加方便|
```py
#!/usr/bin/python3 
# tc.py         tc: title change
import sys
title = ""
if len(sys.argv) == 1:
        while title == "":
                title = input("please input title of LeetCode\n")
else :
	title = ' '.join(sys.argv[1:])

formal_title = title.lower().replace(
        '. ', '').replace(
        ' ', '_')
if formal_title[-3:]=='_ii':
        formal_title=formal_title[:-3]+'_II'
if formal_title[-4:]=='_iii':
        formal_title=formal_title[:-4]+'_III'
print(formal_title)



```
___

 
**mail:**  
<wfnian@gmail.com>  
<1770547906@qq.com>

   ![alt](https://pic3.zhimg.com/v2-ad582cdbe127ee352dc08c74d24506e2_xl.jpg "logo : little nightmares_little_six")   

---

**END:君不见高堂明镜悲白发，朝如青丝暮成雪。**[为什么？](https://github.com/wfnian/learn_git/blob/master/utils.md)
