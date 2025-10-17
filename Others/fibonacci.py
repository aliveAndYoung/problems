cache ={}
def getFibonacci(n) :
    if n in [0 , 1 ]:
        return n 
    if n in cache :
        return cache[n]
    else:
        cache[n]= getFibonacci(n-1)+getFibonacci(n-2)
        return cache[n]
print(getFibonacci(50))