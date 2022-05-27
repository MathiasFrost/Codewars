# https://www.codewars.com/kata/59f44c7bd4b36946fd000052/ruby

class Histogram
	public
	
	def self.hist(s)
		strings = []
		%w[u w x z].each do |letter|
			count = s.scan(letter).length
			if count < 1
				next
			end
			string = "%c  %-5d %s" % [letter, count, "*" * count]
			strings.push string
		end
		strings * "\n"
	end
end
