module Main exposing (main)

import Html exposing (div, h1, p, text)
import Html.Attributes exposing (style)
import Histogram

main = div [style "padding" "2rem" ] [
    h1 [] [ text "Codewars Elm" ],
    p [] [ text (Histogram.hist "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb") ]
 ]