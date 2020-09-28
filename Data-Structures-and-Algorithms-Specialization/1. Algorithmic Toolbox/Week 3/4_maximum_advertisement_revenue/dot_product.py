def ad_revenue(num, profit, clicks):
    profit.sort()
    clicks.sort()
    revenue = 0
    for i in range(num):
        revenue += profit[i] * clicks[i]
    return revenue


if __name__ == '__main__':
    num = int(input())
    profit = [int(x) for x in input().split()]
    clicks = [int(x) for x in input().split()]
    print(ad_revenue(num, profit, clicks))
