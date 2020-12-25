def min_stops(destination, d_tank, stops):
    position = 0
    count = 0
    while position < destination:
        position += d_tank
        if position > destination:
            return count
        temp = [i for i in stops if i <= position]
        if len(temp) != len(stops) and stops[len(temp)] - temp[-1] > d_tank:
            return -1
        position = temp[-1]
        count += 1
    return count


if __name__ == "__main__":
    destination = int(input())
    d_tank = int(input())
    num = int(input())
    stops = [int(i) for i in input().split()]
    print(min_stops(destination, d_tank, stops))
