import sys

def input():
    return sys.stdin.readline()

n = int(input())
l = [0] * 10001

for _ in range(n):
   m = int(input())
   l[m] += 1

for i in range(1,10001):
    if l[i] != 0:
        for _ in range(l[i]):
            print(i)