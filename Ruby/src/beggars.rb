# https://www.codewars.com/kata/59590976838112bfea0000fa/csharp

class Beggars
	public
	
	def self.beggars(values, n)
		arr = []
		(0..n - 1).each do |i|
			res = 0
			j = i
			while j < values.length do
				res += values[j]
				j += n
			end
			arr.push res
		end
		arr
	end
end
