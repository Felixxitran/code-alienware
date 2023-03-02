class LRUCache:
    def __init__(self,n):
        self.cacheSize = n 
        self.doublyQueue = [] #store order of the cache stack
        self.hashset = {} #store value of the cache stack
    def refer(self,x):
        if x not in self.hashset.keys():
            if len(self.doublyQueue) == self.cacheSize:
                #if cache is full
                last = self.doublyQueue[-1]
                print("this is last:"+str(last))
                ele = self.doublyQueue.pop()
                print("this is ele:"+str(ele))
                if ele not in self.doublyQueue:
                    del self.hashset[last]
        else:
            self.doublyQueue.remove(x)
        print(self.doublyQueue)
        self.doublyQueue.insert(0,x)
        self.hashset[x]=0
        print(self.hashset)
        print(self.doublyQueue)
    def display(self):
        print(self.doublyQueue)

ca = LRUCache(4)
ca.refer(1)
ca.refer(2)
ca.refer(3)

ca.refer(1)
ca.refer(4)
ca.refer(5)
ca.display()
