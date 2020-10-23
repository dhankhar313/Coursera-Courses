def signatures(coordinates):
    data = []
    temp = [tuple(x) for x in coordinates]
    temp.sort()
    print(temp)
    for (i, j) in temp:
        data.append(tuple(m for m in range(i, j+1)))
    return data


if __name__ == "__main__":
    num = int(input())
    coordinates = [map(int, input().split()) for i in range(num)]
    print(signatures(coordinates))
