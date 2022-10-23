class LRUCache(object):
    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.capacity = capacity
        self.cache = {}

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        if key in self.cache:
            tmp = self.cache[key]
            self.cache.pop(key)
            self.cache[key] = tmp
            print(self.cache)
        else:
            return -1
        return tmp

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        if key in self.cache:
            self.cache[key] = value
            return
        if len(self.cache) == self.capacity:
            for k in self.cache:
                tmp = k
                break
            self.cache.pop(tmp)
        self.cache[key] = value
        print(self.cache)


s = LRUCache(2)
print()

# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)