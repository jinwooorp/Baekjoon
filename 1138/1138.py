n = int(input())

l = list(map(int,input().split()))
# 키 정보 
# 6 1 1 1 2 0 0
r = [0] * n # 정답 배열

for i in range(n):
    cnt = 0
    for j in range(n):
        if r[j] == 0:
            if cnt == l[i]:
                r[j] = i + 1
                break
            cnt+=1
print(*r)
