import sys

def EuclidGCD(a, b):
    if b == 0:
        return a
    
    rem = a % b
    return EuclidGCD(b, rem)

if __name__ == '__main__':
    a, b = input().split()
    print(EuclidGCD(int(a), int(b)))