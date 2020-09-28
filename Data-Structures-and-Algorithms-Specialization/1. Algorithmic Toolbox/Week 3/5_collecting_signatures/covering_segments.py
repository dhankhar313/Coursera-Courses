def signatures(coordinates):
    return 0


if __name__ == "__main__":
    num = int(input())
    coordinates = []
    coordinates = [input().split() for i in range(num)]
    print(signatures(coordinates))