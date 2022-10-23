class Trie(object):
    def __init__(self):
        self.data = set()

    def insert(self, word):
        """
        :type word: str
        :rtype: None
        """
        if word not in self.data:
            self.data.add(word)

    def search(self, word):
        """
        :type word: str
        :rtype: bool
        """
        return word in self.data

    def startsWith(self, prefix):
        """
        :type prefix: str
        :rtype: bool
        """
        for k in self.data:
            if k[:len(prefix)] == prefix:
                return True

        return False
