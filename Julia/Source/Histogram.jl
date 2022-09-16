"""
# module Histogram

- Julia version:
- Author: Mathi
- Date: 2022-02-12

# Examples

```
jldoctest
julia>
```
"""
module Histogram
	function Hist(s)
		count = Dict(map(letter -> (letter, length(getfield.(eachmatch(Regex(string(letter)), s), :match))), collect("uwxz")))

		res = []
		for letter in collect("uwxz")
			if count[letter] > 0
				num = rpad(count[letter], 6)
				stars = "*" ^ count[letter]
				push!(res, string(letter) * "  " * num * stars)
			end
		end

		return join(res, '\n')
	end
end
