from math import comb
sum=0
for i in range(11):
    sum+=comb(10,i)
    print("{} is {}".format(i,sum))
print(sum)