# noinspection PyShadowingNames
def signatures(lst, n):
    index = 0
    coordinates = []

    while index < n:
        curr = lst[index]
        while index < n - 1 and curr[1] >= lst[index + 1][0]:
            index += 1
        coordinates.append(curr[1])
        index += 1
    print(len(coordinates))
    return ' '.join([str(i) for i in coordinates])


if __name__ == "__main__":
    num = int(input())
    coordinates = []
    for temp in range(num):
        x, y = input().split()
        coordinates.append((x, y))
    coordinates.sort(key=lambda x: x[1])
    print(signatures(coordinates, num))
