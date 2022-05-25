module Histogram exposing (hist)

import Dict

hist : String -> String
hist s = Dict.fromList (List.map (\letter -> (letter, (List.length (String.split (String.fromChar letter) s)) - 1)) (String.toList "uwxz"))
        |> Dict.filter (\_ value -> value > 0)
        |> Dict.map (\key value -> String.fromChar key ++ "  " ++ String.padRight 6 ' ' (String.fromInt value) ++ String.repeat value "*")
        |> Dict.values
        |> String.join "\n"
