n = int(input())

def func(n):
    if n <= 1:
        return 1 
    return func(n-1) * n

num = str(func(n))

ans = 0
for i in num[::-1]:
    if i == '0':
        ans+=1
    else:
        break

print(ans)