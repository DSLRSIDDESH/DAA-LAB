# Q2: Coin change problem using the following strategy: 
# Change (x) using first maximum or Change (x) using second maximum or ... or Change (x) using kth maximum
# with the constraint that if ith maximum is used then 1...i-1th maximum should not be used.
x = int(input("Enter 'x' : "))
a = list(map(int,input("Enter all the denominations with space-separated : ").split()))
cs = []
a.sort()
k = len(a)
j = 0
sum1 = 0
l = []
while j < k:
    t = x
    coins = [0]*j
    i = len(a)-j-1
    while i >= 0:
        coins.append(t//a[i])
        t %= a[i]
        i -= 1
    cs.append(coins)
    j += 1
p = 0
for i in cs:
    if p == 0:
        sum1 = sum(cs[0])
        l = i
    elif sum(i) < sum1:
        sum1 = sum(i)
        l = i
    p += 1
print("Denominations :",end =" ")
for j in a:
    print(j,end = " ")
print()
for j in cs:
    print("        coins :",end= " ")
    for k in range(len(j)-1,-1,-1):
        print(j[k],end = " ")
    print()
l.reverse()
print("The set which gives minimum coins is : ",*l)