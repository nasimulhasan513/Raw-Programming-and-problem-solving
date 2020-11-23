# l = int(input())
# a = list(map(int, input().split()))
l = 6
a = [1, 1, 2, 2, 4, 4, 5, 5, 5]
items = list(set(a))
s = []
for i in range(len(items)-1):
    if items[i+1]-items[i]==1:
        s.append()
print(items)
