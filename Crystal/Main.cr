require "./src/NextBigger"
require "./src/Beggars"

puts "Codewars Crystal"

puts "Next bigger of 1234567890 is %d" % [ NextBigger.next_bigger(1234567890) ]

puts Beggars.beggars([1, 2, 3, 4, 5] of Int32, 2)
