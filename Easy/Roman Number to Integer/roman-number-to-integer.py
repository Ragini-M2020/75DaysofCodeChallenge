#User function Template for python3

class Solution:
    def romanToDecimal(self, S): 
        # code here
         trans = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
         num = 0
         prev = S[0]
         for i in range(len(S)):
            char = S[i]
            if trans[prev] < trans[char]:
                num += trans[char]
                num -= 2*trans[prev]
            else:
                num += trans[char]
            prev = char
         return num


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for _ in range(t):
        ob = Solution()
        S = input()
        print(ob.romanToDecimal(S))
# } Driver Code Ends