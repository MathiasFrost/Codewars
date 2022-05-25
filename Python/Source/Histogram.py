class Histogram:

    @staticmethod
    def hist(s):
        count = {}
        for letter in s:
            count[letter] = letter in count and count[letter] + 1 or 1

        res = []
        for letter in 'uwxz':
            if letter in count:
                string = '{letter}  {num:<5} {star:*<{num}}'.format(letter=letter, num=count[letter], star='*')
                res.append(string)

        return '\n'.join(res)
