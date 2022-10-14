n = int(input())
a = []
k = 0
for i in range(n):
    c = int(input())
    a.append(c)
    k += c
m =0
if(k%2 != 0):
    print("NO")
else:
    k //= 2
    for i in range(n):
        if(m+a[i] < k):
            m += a[i]
            if(m > k):
                m -= a[i]
if m == k:
    print("YES")
else:
    print("NO")