cacheMaxSize = 4
cacheSize = 00 
cache = [None]*cacheMaxSize
indices = {}

def swap(a,b):
    temp = a
    a = b 
    b = temp

def parent(i):
    return (i-1)//2

def left(i):
    return 2*i +1 

def right(i):
    return 2*i +2 

def heapify(v,m,i,n):
    l = left(i)
    r = right(i)

def refer(cache, indices ,value,cacheSize):
    if not value in indices:
        insert(cache,indices,value,cacheSize)
    else:
        increment(cache,indices,indices[value],cacheSize)
