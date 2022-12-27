mod = 1000000007

T = int(input())
for t in range(1, T+1):
    n = int(input())
    ans = (n*(n+1)*(2*n+1)//6)
    ans += ((((n-1)*(n)*(n+1))//3))
    ans *= 2022
    ans %= mod
    print(ans)
