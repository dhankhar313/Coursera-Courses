def EuclidGCD(a, b):
    if b == 0:
        return a
    
    rem = a % b
    return EuclidGCD(b, rem)

def lcm(a, b):
    gcd = EuclidGCD(a, b)
    num = a / gcd
    return int(num*b)


if __name__ == '__main__':
    a, b = map(int, input().split())
    print(lcm(a, b))

