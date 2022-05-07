l = []
rows = int(input())
cols = int(input())
for i in range(rows):
    l.append(sum(list(map(int,input().split(' ')))))
for i in l: 
    print(i)