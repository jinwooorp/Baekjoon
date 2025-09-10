n = int(input())

l = [int(x) for x in input().split()]
m = max(l)

al = [s / m * 100 for s in l]
a = sum(al) / n

print(f"{a:.6f}")