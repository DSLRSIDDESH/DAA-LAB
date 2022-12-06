l = list(map(int,input("Enter the denominations : ").split()))
x = int(input("Enter 'x' : "))
dp = [0] * (x+1)
for i in range(min(l),x+1):
    dp[i] = 1 + min(dp[i-j] for j in l if i-j>=0)
if dp[-1] == 0:
    print("We can't give change for",x)
else:
    print(f"Minimum number of coins required for {x} :",dp[-1])