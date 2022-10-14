x = input("Enter the string : ")
l = list(map(str,x))
num1 = len(x)
k = 0
m = len(x)//2
l1 = []
t1 = 1
t2 = 0
if len(x)%2 == 0:
    t1 = 0
    t2 = 1
m -= t2
for i in range(len(x)//2):
    if l[m-i-t1] == l[m+i+1]:
        l1.insert(0,l[m-i-t1])
        l1.append(l[m+i+1])
    else:
        l1.insert(0,l[m-i-t1])
        l1.append(l[m-i-t1])
        l1.insert(0,l[m+i+1])
        l1.append(l[m+i+1])
sim_count = 0
for i in range(len(l1)-1):
    if l1[i] == l1[i+1]:
        sim_count += 1
t = 0
if len(x)%2 != 0:
    if l[m] != l1[len(l1)//2]:
        t = 1
print("The minimum number of characters required :",len(l1) - len(l) - sim_count + t1 + t)