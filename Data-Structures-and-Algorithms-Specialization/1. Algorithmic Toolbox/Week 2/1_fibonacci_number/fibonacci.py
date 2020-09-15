def calc_fib(n):
    f = [0, 1]
    for i in range(2, n+1):
        f.insert(i, f[i-1] + f[i-2])
    return f[n]

n = int(input())
print(calc_fib(n))
