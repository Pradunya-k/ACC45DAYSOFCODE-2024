# cook your dish here
for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    print(sum([max(x-1, m-x) for x in a]))