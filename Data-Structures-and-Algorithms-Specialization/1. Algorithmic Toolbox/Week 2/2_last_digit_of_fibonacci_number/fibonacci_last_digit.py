def calc_fib(n):

    f = [0, 1]
    for i in range(2, 61):
        f.insert(i, (f[i-1] + f[i-2]) % 10)
    temp = n % 60
    return f[temp]

n = int(input())
print(calc_fib(n))
