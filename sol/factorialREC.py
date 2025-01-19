
def getFactorial (n):
    if n > 1 :
        return getFactorial(n-1) * n 
    else :
        return 1
print(getFactorial(4))    