def calc_fib(n):

    # f = [0, 1]
    # for i in range(2, n+1):
    #     f.insert(i, f[i-1] + f[i-2])
    # return f[n]%10

    if n <= 1:
        return n

    previous = 0;
    current  = 1;

    for i in range(n-1):
        tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    
    return current % 10

n = int(input())
print(calc_fib(n))
