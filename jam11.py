# codechef problem code: JAM11

dp = [0]*100001
mod = 1000000007


def solution():
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4
    for i in range(4, 100000):
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]) % mod


solution()

for _ in range(int(input())):
    n = int(input())
    print(dp[n])
