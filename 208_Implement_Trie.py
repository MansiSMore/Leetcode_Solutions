#208. Implement Trie
class Trie:
    def __init__(self):
        self.root = {}
        self.endSymbol = '*'
        

    def insert(self, word: str) -> None:
        node = self.root
        for letter in word:
            if letter not in node:
                node[letter] = {}
            node = node[letter]
        node[self.endSymbol] = True
        

    def search(self, word: str) -> bool:
        node = self.root
        for letter in word:
            if letter not in node: return False
            node = node[letter]
        return self.endSymbol in node
        

    def startsWith(self, prefix: str) -> bool:
        node = self.root
        for letter in prefix:
            if letter not in node: return False
            node = node[letter]
        return True

