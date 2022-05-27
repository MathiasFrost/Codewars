# https://www.codewars.com/kata/59590976838112bfea0000fa/python

class Beggars:
    
    @staticmethod
    def beggars(values: list[int], n: int):
        arr: list[int] = []
        for i in range(0, n):
            res = 0
            j = i
            while j < len(values):
                res += values[j]
                j += n
            arr.append(res)
        return arr
