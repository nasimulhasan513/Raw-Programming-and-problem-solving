
for i in [0]*int(input()):
    n = input()
    s=[]
    c=0
    for j in n:
        if j!=0:
            s.append((int(j)))
            continue
    for k in s:
        try:
            if int(n)%k==0:
                c+=1
        except ZeroDivisionError:
            pass    
    print(c)
    c=0
    s = []


