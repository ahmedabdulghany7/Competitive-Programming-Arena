lst = list(map(int,input().split()))
freq = 770*[0]
for i in lst:
    index = i + 500
    freq [index] +=1
for index, count in enumerate(freq):
    if count > 0:
        print('Value', index - 500, 'appeared', count, 'times')
