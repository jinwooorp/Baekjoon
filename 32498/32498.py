n = int(input())
cnt = 0
for _ in range(n):
    m = int(input())
    if m % 2 == 1:
        cnt+=1

print(cnt)