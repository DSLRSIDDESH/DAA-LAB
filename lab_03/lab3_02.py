n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

a=[]
b=[]
if(n<2):
    print(arr[0])
    exit()
if(len(arr)%2==0):
    for i in range(0,len(arr),2):
        if(arr[i]<arr[i+1]):
            a.append(arr[i])
            b.append(arr[i+1])
        else:
            a.append(arr[i+1])
            b.append(arr[i])
else:
    for i in range(0,len(arr)-2,2):
        if(arr[i]<arr[i+1]):
            a.append(arr[i])
            b.append(arr[i+1])
        else:
            a.append(arr[i+1])
            b.append(arr[i])
    a.append(arr[-1])
    b.append(arr[-1])
min=a[0]
max=b[0]
for i in range(len(a)):
    if(min>a[i]):
        min=a[i]
for i in range(len(b)):
    if(max<b[i]):
        max=b[i]
        
print(min)
print(max)