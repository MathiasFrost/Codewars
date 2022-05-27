require 'histogram'
require 'beggars'

puts("Codewars Ruby")

hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"
puts(Histogram.hist(hist))

puts(Beggars.beggars([1, 2, 3, 4, 5], 2))