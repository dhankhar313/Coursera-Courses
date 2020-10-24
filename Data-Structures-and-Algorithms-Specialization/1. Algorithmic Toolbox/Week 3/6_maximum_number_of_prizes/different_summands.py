import itertools


def prizes(lst, num):
    final = []
    length = 0
    for i in range(1, num):
        temp = list(itertools.permutations(lst, i))
        temp2 = [i for i in temp if sum(i) == num]
        final.append(temp2)
        if len(temp2) > length:
            length = len(temp2)
        final = [i for i in final if len(i) == length]

    print(len(final[0][0]))
    return ' '.join([str(i) for i in final[0][0]])


if __name__ == "__main__":
    num = int(input())
    nums = [int(i) for i in range(1, num + 1)]
    print(prizes(nums, num))
