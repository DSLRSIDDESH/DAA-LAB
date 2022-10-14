def binary(m,n):
    li = []
    for i in range(n):
        b = m%2
        m = m//2
        li.insert(0,b)
    return li
num = int(input("Enter n: "))
a = []
for i in range(num):
    n1 = int(input("Enter element: "))
    a.append(n1)
print("Given set is:",a)
m = 2**num
l1 = []
for i in range(m):
    l2 = []
    l2 = binary(i,num)
    l1.append(l2)
print("Binary strings are:",l1)
print("Subsets are:",end = " ")
for i in l1:
    l3 = []
    for j in range(len(i)):
        if(i[j] == 1):
            l3.append(a[j])
    print(l3,end=", ")
print()