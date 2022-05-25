Imports System.Collections.ObjectModel

Public Module Histogram
    Public Function Hist(s As String) As String
        Dim strings As ICollection(Of String) = New Collection(Of String)()
        For Each letter in "uwxz"
            Dim count = s.Count(function(c) c.Equals(letter))
            If count < 1
                Continue For
            End If
            Dim str = String.Format("{0}  {1,-5} {2}", letter, count, New String("*", count))
            strings.Add(str)
        Next
        Return String.Join("\n", strings)
    End Function
End Module
