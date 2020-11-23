import math
while True:
    a,r1,r2,r3,r4=input().split()
    a=int(a)
    r1=int(r1)
    r2=int(r2)
    r3=int(r3)
    r4=int(r4)
    area=a*a
    pi=math.acos(-1)
    rl=pi*(r1*r1)
    rt=pi*(r2*r2)
    rb=pi*(r3*r3)
    rr=pi*(r3*r3)
    due=area-(rl+rt+rb+rr)
    print("%.3f"%due);