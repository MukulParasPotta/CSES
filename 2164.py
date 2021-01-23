def j(n, target):
    p, i, prev = list(range(n)), 0, -1
    while len(p) > (n - target):
        i = (i + 1) % len(p)
        prev = p.pop(i)
    print(prev + 1)
    
n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    j(a, b)