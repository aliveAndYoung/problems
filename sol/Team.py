# 3
# 1 1 0
# 1 1 1
# 1 0 0

problems = int(input()) 
counter = 0
for i in range(  problems ) :
    a,b,c = map( int , input().split() )
    if a+b+c > 1 :
        counter += 1
print ( counter)        

