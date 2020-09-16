def calc_fib(m, n):

    f = [0, 1]
    for i in range(2, 61):
        f.insert(i, (f[i-1] + f[i-2]) % 10)
    rem1 = m % 60
    quotient1 = (m - rem1) / 60
    rem2 = n % 60
    quotient2 = (n - rem2) / 60
    sum1, sum2, sum3 = sum(f[rem1:]), sum(f[:rem2+1]), sum(f) * (quotient2 - (quotient1 + 1))
    return int((sum1 + sum2 +sum3) % 10)

if __name__ == '__main__':
    m, n = map(int, input().split())
    print(calc_fib(m, n))
