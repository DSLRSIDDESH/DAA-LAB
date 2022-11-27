w = list(map(int,input("Enter the weights : ").split()))
p = list(map(int,input("Enter the profits : ").split()))
Weight = int(input("Enter the capacity(weight) of knapsack : "))
dp = [[0]*(Weight+1)]*(len(w)+1)
for i in range(len(w)+1):
    for j in range(Weight+1):
        if w[i-1] <= j :
            dp[i][j] = max(dp[i-1][j],p[i-1]+dp[i-1][j-w[i-1]])
        else :
            dp[i][j] = dp[i-1][j]
print("Maximum Profit : ",dp[-1][-1])