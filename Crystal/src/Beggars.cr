# https://www.codewars.com/kata/59590976838112bfea0000fa/crystal

class Beggars
  def self.beggars(values : Array(Int32), n : Int32)
    arr = (1..n).map { 0 }
    i = -1
    while (i += 1) < n
      res = 0
      j = i - n
      while (j += n) < values.size
        res += values[j]
      end
      arr[i] = res
    end

    arr
  end
end
