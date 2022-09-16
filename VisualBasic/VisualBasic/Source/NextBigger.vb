Friend Module NextBigger
	Public Function NextBiggerNumber(n As Long) As Long

		Dim digits As IList (Of Char) = n.ToString().ToCharArray()
		Dim index = digits.Count - 1

		' If a digit is greater than the previous, we can swap it
		While index > 0 AndAlso digits.Item(index) <= digits.Item(index - 1)
			index -= 1
		End While

		' If there was none, it is already arranged in the highest possible combination
		If index < 1
			Return - 1
		End If

		' Split the digits at the swappable number
		Dim left = digits.Take(index - 1)
		Dim mid = digits.Item(index - 1)
		Dim right = digits.Skip(index).ToList()

		' The number we want to swap is the one that is the smallest of those that are greater than mid
		Dim candidate As Char = right.Where(function(c) c > mid).Min()

		' Swap the value of the first occurence of candidate with mid
		right.Item(right.IndexOf(candidate)) = mid
		mid = candidate

		' Sort right side to be the smallest possible combination
		right.Sort(function(a, b) a.CompareTo(b))

		Return Long.Parse(String.Join("", left.Concat(New Char() {mid}).Concat(right)))

	End Function
End Module
