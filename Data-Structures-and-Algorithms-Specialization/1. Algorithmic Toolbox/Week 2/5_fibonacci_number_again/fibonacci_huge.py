def pisano_period(m):
    previous, current = 0, 1
    for i in range(0, m * m):
        previous, current = current, (previous + current) % m
        if previous == 0 and current == 1:
            return i + 1


def fibonacci_huge(n, m):
    pp_index = pisano_period(m)
    n = n % pp_index
    previous, current = 0, 1
    if n <= 1:
        return n
    for i in range(n - 1):
        previous, current = current, previous + current
    return current % m


if __name__ == '__main__':
    n, m = map(int, input().split())
    print(fibonacci_huge(n, m))
