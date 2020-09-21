def knapsack(dict, capacity):
    amount = 0
    temp = []
    for i, j in dict:
        temp_value, temp_weight = j
        if temp_weight <= capacity and i not in temp and capacity != 0:
            amount += temp_value
            capacity -= temp_weight
        elif temp_weight > capacity and i not in temp and capacity != 0:
            amount += temp_value / (temp_weight / capacity)
        else:
            pass
        temp.append(i)
    return format(amount, '.4f')


if __name__ == '__main__':
    items, capacity = map(int, input().split())
    dict = {}
    for i in range(items):
        value, weight = map(int, input().split())
        dict[int(value/weight)] = (value, weight)
    dict = sorted(dict.items(), reverse=True)
    print(knapsack(dict, capacity))
