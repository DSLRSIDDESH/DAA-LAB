n = int(input())
z = int(input())

a = [0]*n
for i in range(n):
    a[i] = int(input())
    
check = 0
for i in range(n):
    x = a[i]
    try:
        y = a[a.index(z-x)]
        if x!=y:
            print(x)
            print(y)
            exit()
        else:
            check = 1
    except ValueError:
            check = 1
            
if check == 1:
    print("*")