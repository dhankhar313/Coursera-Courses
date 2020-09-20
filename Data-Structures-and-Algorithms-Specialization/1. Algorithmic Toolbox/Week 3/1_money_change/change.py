import math


def change(amount):
    denominations_10 = math.floor(amount / 10)
    denominations_5 = math.floor((amount - denominations_10 * 10) / 5)
    denominations_1 = amount - (denominations_10 * 10 + denominations_5 * 5)
    return denominations_1 + denominations_5 + denominations_10


if __name__ == '__main__':
    amount = int(input())
    print(change(amount))
