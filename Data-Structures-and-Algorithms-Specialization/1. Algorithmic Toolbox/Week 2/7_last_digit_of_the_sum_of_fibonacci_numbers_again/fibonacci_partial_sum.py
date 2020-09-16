def calc_fib(n):

    f = [0, 1]
    for i in range(2, 61):
        f.insert(i, (f[i-1] + f[i-2]) % 10)
    rem = n % 60
    quotient = (n - rem) / 60
    sum1 = sum(f) * quotient
    sum2 = sum(f[0: rem+1])
    return int((sum1 + sum2) % 10)

n = int(input())
print(calc_fib(n))
