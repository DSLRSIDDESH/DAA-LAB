n = int(input())
l = list(i+1 for i in range(n))
i = 0
while len(l) != 1:
    k = l[-1]
    if i == 0:
        l = l[0::2]
    elif i == 1:
        l = l[1::2]
    if(k == l[-1]):
        i = 1
    else:
        i = 0
print(l[0])