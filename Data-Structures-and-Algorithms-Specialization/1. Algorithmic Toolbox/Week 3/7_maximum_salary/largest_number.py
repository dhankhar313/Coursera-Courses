def largest_num(num, nums):
    greatest = ''
    nums.sort()
    for i in nums:
        start = greatest + str(i)
        end = str(i) + greatest
        if int(start) > int(end):
            greatest = start
        else:
            greatest = end
    return int(greatest)


if __name__ == '__main__':
    num = int(input())
    nums = [int(i) for i in input().split()]
    print(largest_num(num, nums))
