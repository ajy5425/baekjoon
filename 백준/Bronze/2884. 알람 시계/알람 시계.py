H,M = map(int,input().split())
if 0<H<=23 and 0<=M<=59:
    if 0<=M<45:
        print(H-1,M+15)
    else:
        print(H,M-45)
else:
    if 0<=M<45:
        print(23,M+15)
    else:
        print(H,M-45)