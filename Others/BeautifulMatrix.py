row =0 
col =0
for i in range(5):
    myList = list(map(int, input().split()))
    try:
        col = myList.index(1) + 1
        row = i+1
    except ValueError :
        continue    
print( abs(3-col) + abs(3 - row))