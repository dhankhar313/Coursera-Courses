def fueling(total_distance, distance, stops):
    position = 0
    count = 0
    while position < total_distance:
        print('Current Position:', position + distance)
        position += distance
        temp = [int(i) for i in stops if int(i) < position]
        print('List:', temp)
        if len(temp) == 0:
            print('If Clause')
            return count
        else:
            print('Else Clause')
            position = temp[-1]
            print('Position in loop:', position)
            count += 1
        temp.clear()
    return count


if __name__ == '__main__':
    total_distance = int(input())
    distance = int(input())
    num = int(input())
    stops = input().split()
    print(fueling(total_distance, distance, stops))
