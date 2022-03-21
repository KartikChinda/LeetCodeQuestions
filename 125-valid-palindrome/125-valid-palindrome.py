class Solution:
    def isPalindrome(self, s: str) -> bool:
        result = ""
        for i in s:
            if i.isalnum():
                result += i.lower()
        if result == result[::-1]:
            return True
        else:
            return False