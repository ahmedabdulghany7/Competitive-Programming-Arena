#Most Frequent Number within the range [0, 149].
lst = list(map(int, input().split()))
ls = [0]*150
freq = 0
print(ls)
for x in (lst):
    ls[x] +=1
print(max(ls), ls.index(max(ls)))
