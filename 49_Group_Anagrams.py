#49. Group Anagrams
#Group_Anagrams
'''
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
'''


from collections import defaultdict

class Solution:
    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ll = defaultdict(list)
        
        for i in strs:
            ll["".join(sorted(i))].append(i)
        return list(ll.values())
