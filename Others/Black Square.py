weights = list(map( int  , input().split()  ))
strips = input()
calories = 0 
for strip in strips :
    calories += weights[int(strip)-1]
print (calories)    

