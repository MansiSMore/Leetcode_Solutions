#211. Add_and_Search_Word_Data_structure_design
'''
Design a data structure that supports the following two operations:

void addWord(word)
bool search(word)
search(word) can search a literal word or a regular expression string containing only letters a-z or .. A . means it can represent any one letter.

Example:

addWord("bad")
addWord("dad")
addWord("mad")
search("pad") -> false
search("bad") -> true
search(".ad") -> true
search("b..") -> true
'''
class WordDictionary:

    def __init__(self):
        self.trie = dict()
        

    def addWord(self, word: str) -> None:
        trie = self.trie
        for w in word:
            if w not in trie:
                trie[w] = dict()
                trie = trie[w]
            else:
                trie = trie[w]
        trie['exist'] = 1
        

    def search(self, word: str) -> bool:
        return self._search(word, self.trie)
    
    def _search(self, word:str, cur:dict) -> bool:
        if len(word) == 0:
            return 'exist' in cur
        else:
            if word[0] == '.':
                ans = False
                for key in cur:
                    if key != 'exist':
                        ans = ans or self._search(word[1:], cur[key])
                return ans
            elif word[0] in cur:
                return self._search(word[1:], cur[word[0]])
            else:
                return False
