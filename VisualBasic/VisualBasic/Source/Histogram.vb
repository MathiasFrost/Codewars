Friend Module Histogram
	Public Function Hist(s As String) As String
		Return String.Join(Environment.NewLine, from letter in "uwxz"
			let count = s.Count(function(c) c.Equals(letter))
			where count > 0
			select String.Format("{0} {1,-5} {2}", letter, count, new String("*", count)))
	End Function
End Module
