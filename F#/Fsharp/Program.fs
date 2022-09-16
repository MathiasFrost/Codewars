module Program

open Fsharp
open RomanNumerals

printfn "Codewars F#"

printfn $"""IX is {FromRoman "IX"}"""
printfn $"""13 is {ToRoman 13}"""

printf "%s\n" (Histogram.Hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb")
