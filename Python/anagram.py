from collections import Counter

str1 = "hello".lower()
str2 = "Hello".lower()


print(Counter(str1)==Counter(str2))