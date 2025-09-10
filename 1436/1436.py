n = int(input())

r = 666

if (n == 1):
    print(r)
    exit()
else:
    for i in range(1,n):
        while(1):
            r+=1
            t = str(r)
            if t.find("666") != -1:
                break

print(r)