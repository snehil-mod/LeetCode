class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}
        for i in s:
            freq[i] = freq.get(i, 0) + 1
        
        mylist = []
        for ch, count in freq.items():
            mylist.append(ch * count)
        
        mylist.sort(key = len, reverse = True)
        return "".join(mylist)