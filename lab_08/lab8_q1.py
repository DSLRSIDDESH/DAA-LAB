# Input: x, d1,d2,...,dk
# Output: change(x) using d1,d2,...,dk such that the number of coins used is minimum.
# Q1: Coin change problem using greedy strategy (as discussed in class).Specify the case where greedy fails and any observation about the denominations for which greedy works always. Implement your logic.

x = int(input("Enter 'x' : "))
a = list(map(int,input("Enter all the denominations with space-separated : ").split()))
coins = []
a.sort()
i = len(a)-1
while i >= 0:
    coins.append(x//a[i])
    x %= a[i]
    i -= 1
print("Denominations :",end =" ")
for j in a:
    print(j,end = " ")
print()
print("        coins :",end =" ")
for j in range(len(coins)-1,-1,-1):
    print(coins[j],end = " ")
print()

# When the denominations are in Arithmetic Progression then the greedy algorithm will definitely work