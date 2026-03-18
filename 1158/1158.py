from collections import deque

n , m = map(int,input().split())

q = deque()
l = []
for i in range(1,n+1):
    q.append(i)

while q:
    for _ in range(m-1):
        x = q.popleft()
        q.append(x)
    l.append(q.popleft())
print("<" + ", ".join(map(str,l)) + ">")