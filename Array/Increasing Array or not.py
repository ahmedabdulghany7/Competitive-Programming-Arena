lst = list(map(int,input().split()))
flag = True
for x in range (1,len(lst)):
    if flag == False:
        break
    elif lst[x]<lst[x-1]:
        flag = False
        break
print(flag)
