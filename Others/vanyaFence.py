num , height =  map(int ,input().split())
heights = list(map(int, input().split()))
width = 0
for h in heights :
    if h > height :
        width += 2
    else :
        width+=1
print(width)
