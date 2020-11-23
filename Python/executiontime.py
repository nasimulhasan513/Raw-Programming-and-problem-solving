import time

def myFunc(n):
    start_time = time.time()
    s=0
    for i in range(1,n+1):
        s+=n
    end_time = time.time()
    return s,end_time-start_time


n= 500

print(myFunc(n))