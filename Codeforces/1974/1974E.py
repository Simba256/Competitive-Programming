def knapSackRec(W, x, wt, val, index, dp):
    # base condition
    if index < 0:
        return 0
    if (index, W) in dp:
        return dp[(index, W)]

    if wt[index] > W:
        # Store the value of function call stack in table before return
        dp[(index, W)] = knapSackRec(min(W, (index - 1) * x), x, wt, val, index - 1, dp)
        return dp[(index, W)]
    else:
        # Store value in a table before return
        dp[(index, W)] = max(
            val[index] + knapSackRec(min(W - wt[index], (index - 1) * x), x, wt, val, index - 1, dp),
            knapSackRec(min((index - 1) * x, W), x, wt, val, index - 1, dp)
        )
        return dp[(index, W)]

def knapSack(X, wt, val, n):
    # Create the table dynamically
    dp = {}
    return knapSackRec(X * (n - 1), X, wt, val, n - 1, dp)

def solve():
    m, x = map(int, input().split())
    costs = []
    happiness = []
    for _ in range(m):
        c, h = map(int, input().split())
        costs.append(c)
        happiness.append(h)
    print(knapSack(x, costs, happiness, m))

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
