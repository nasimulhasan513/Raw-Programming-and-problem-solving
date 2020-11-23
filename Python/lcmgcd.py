# # GCD(a,b)+LCM(a,b)=a+b


for i in [0]*int(input()):
    a,b = map(int,input().split())
    print('true' if a%b==0 or b%a==0 else 'false')


