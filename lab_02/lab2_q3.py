a=[]
k=int(input())

for i in range(k):
    b=[]
    m=int(input())
    for i in range(m):
        b.append(int(input()))
    a.append(b)
    b=""
    
arr=[]
for num in a:
    for i in num:
        arr.append(i)
        
sort=sorted(arr)

for num in sort:
    print(num)