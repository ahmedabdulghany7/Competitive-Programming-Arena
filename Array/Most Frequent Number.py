#Most Frequent Number using frequency Array
lst = list(map(int, input().split()))
ls = [0]*(max(lst)+1)
for x in (lst):
    ls[x] +=1
print(max(ls), ls.index(max(ls)))
