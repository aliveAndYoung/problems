games = int(input())
score = input()
counter = 0 
for game in score :
    if game =='A':
        counter+=1
    else :
        counter-= 1
if counter > 0 :
    print ("Anton")
elif counter < 0 :
    print ("Danik")
else :
    print ("Friendship")