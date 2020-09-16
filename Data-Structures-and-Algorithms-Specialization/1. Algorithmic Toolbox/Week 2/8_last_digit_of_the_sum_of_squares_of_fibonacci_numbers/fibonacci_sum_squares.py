def calc_fib(n):

    f = [0, 1]
    for i in range(2, 61):
        f.insert(i, (f[i-1] + f[i-2]) % 10)
    f = [x ** 2 for x in f] 
    rem = n % 60
    quotient =  (n - rem) / 60
    return int (sum(f) * quotient + sum(f[0: rem + 1])) % 10

n = int(input())
print(calc_fib(n))
