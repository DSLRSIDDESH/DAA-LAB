t = int(input())
for k in range(t):
    n,m,c = map(int,input().split())
    a = list(map(int,input().split()))
    i = 0
    l = []
    while i < c:
        j = 0
        while j < a[i]:
            l.append(i+1)
            j += 1
        i += 1
    p = 0
    for i in range(n):
        if(i%2==0):
            for j in range(m):
                print(l[p],end=" ")
                p += 1
            print()
        elif i%2!=0:
            for j in range(m):
                print(l[p+m-j-1],end=" ")
            p += m
            print()