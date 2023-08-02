class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        result = ""
        sign = ""
        
        if s == "":
            return 0

        if s[0] == "-" or s[0] == "+":
            sign = s[0]
            s = s[1:]
        
        for i in s:
            if i.isnumeric():
                result += i
            else:
                break

        if result == "":
            return 0
        
        num = int(sign + result)
        mx = 2**31 - 1
        mi = -(2**31)

        if num < mi:
            return mi
        if num > mx:
            return mx
        return num