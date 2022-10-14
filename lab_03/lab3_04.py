n = int(input())
a = []
for i in range(n):
    if i==0:
        n1 = int(input())
        a.append(n1)
    else:
        n1 = int(input())
        if n1 < a[0]:
            a.insert(0,n1)
        elif n1 > a[-1]:
            a.append(n1)
        else:
            a.insert(-2,n1)

print(a[0])
print(a[-1])