module RomanNumerals

let (|Prefix|_|) (p: string) (s: string) =
    if s.StartsWith(p) then
        Some(s.Substring(p.Length))
    else
        None

let FromRoman (romanNumeral: string) =
    let rec loop str num =
        match str with
        | Prefix "M" rest -> loop rest (num + 1000)
        | Prefix "CM" rest -> loop rest (num + 900)
        | Prefix "D" rest -> loop rest (num + 500)
        | Prefix "CD" rest -> loop rest (num + 400)
        | Prefix "C" rest -> loop rest (num + 100)
        | Prefix "XC" rest -> loop rest (num + 90)
        | Prefix "L" rest -> loop rest (num + 50)
        | Prefix "XL" rest -> loop rest (num + 40)
        | Prefix "X" rest -> loop rest (num + 10)
        | Prefix "IX" rest -> loop rest (num + 9)
        | Prefix "V" rest -> loop rest (num + 5)
        | Prefix "IV" rest -> loop rest (num + 4)
        | Prefix "I" rest -> loop rest (num + 1)
        | _ -> num
    loop romanNumeral 0

let ToRoman (n: int) =
    let rec loop num str =
        match num with
        | x when x >= 1000 -> loop (num - 1000) (str + "M")
        | x when x >= 900 -> loop (num - 900) (str + "CM")
        | x when x >= 500 -> loop (num - 500) (str + "D")
        | x when x >= 400 -> loop (num - 400) (str + "CD")
        | x when x >= 100 -> loop (num - 100) (str + "C")
        | x when x >= 90 -> loop (num - 90) (str + "XC")
        | x when x >= 50 -> loop (num - 50) (str + "L")
        | x when x >= 40 -> loop (num - 40) (str + "XL")
        | x when x >= 10 -> loop (num - 10) (str + "X")
        | x when x >= 9 -> loop (num - 9) (str + "IX")
        | x when x >= 5 -> loop (num - 5) (str + "V")
        | x when x >= 4 -> loop (num - 4) (str + "IV")
        | x when x >= 1 -> loop (num - 1) (str + "I")
        | _ -> str
    loop n ""
