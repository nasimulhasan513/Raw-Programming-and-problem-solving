for i in [0]*int(input()):
    n = int(input())
    res = 0
    if n%2!=0:
        res = n*2
    else:
        res = 2**(n+1)-1
    print(res)  