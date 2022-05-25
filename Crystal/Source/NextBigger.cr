class NextBigger
  def self.next_bigger(n : Int64)
    digits = n.digits.reverse!
    index = digits.size - 1

    # If a digit is greater than the previous, we can swap it
    while index > 0 && digits[index] <= digits[index - 1]
      index -= 1
    end

    # If there was none, it is already arranged in the highest possible combination
    if index < 1
      return -1
    end

    # Split the digits at the swappable number
    left = digits[0, index - 1]
    mid = digits[index - 1]
    right = digits.[index, digits.size]

    # The number we want to swap is the one that is the smallest of those that are greater than mid
    candidate = (right.select { |n| n > mid }).min

    # Swap the value of the first occurrence of candidate with mid
    right[right.index(candidate) || 0] = mid
    mid = candidate

    # Sort right side to be the smallest possible combination
    right.sort! {|a, b| a - b}

    ((left << mid) + right).join.to_i64
  end
end
