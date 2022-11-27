n = int(input("Enter the number of matrices : "))
print("Enter the rows and column for every matrix in 'nxm' manner")
ps,p = [],[]
for i in range(n):
    mul = input(f'Enter for matrix-{i+1} : ')
    ps.append(list(map(int,mul.split('x'))))
for i in ps :
    p.append(i[0])
p.append(ps[-1][-1])
dp = [[float('inf') for i in range(n+1)] for j in range(n+1)]
for i in range(1,n+1) : dp[i][i] = 0
for i in range(1,n+1):
    for j in range(1,n-i+1):
        for k in range(j,j+i):
            dp[j][j+i] = min(dp[j][k] + dp[k+1][j+i] + (p[j-1]*p[k]*p[j+i]),dp[j][j+i])
print("Minimum number of scalar multiplications : ",dp[1][n])