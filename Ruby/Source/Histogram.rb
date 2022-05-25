class Histogram
  def self.hist(s)
    strings = []
    %w[u w x z].each { |letter|
      count = s.scan(letter).length
      if count < 1
        next
      end
      string = "%c  %-5d %s" % [letter, count, "*" * count]
      strings.push string
    }
    strings * "\n"
  end
end
