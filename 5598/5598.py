decryto = input().strip()
cryto=[]
for i in decryto:
    if ord(i) - 3 < ord('A'):
        cryto.append(chr(ord(i) + 23))
    else:
        cryto.append(chr(ord(i) - 3))

print(*cryto,sep='')