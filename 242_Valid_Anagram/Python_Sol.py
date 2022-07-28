class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(s is None and t is None):
            return True
        if((s is None and t is not None) or (t is None and s is not None)):
            return False
        if(len(s) != len(t)):
            return False
        word_map = [0 for _ in range(26)]
        for index in range(len(s)):
            word_map[int(ord(s[index]) - ord('a'))] += 1
            word_map[ int(ord(t[index]) - ord('a'))] -= 1
        total_wordmap = sum(abs(l) for l in word_map)
        if(total_wordmap == 0):
            return True
        return False