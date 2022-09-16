namespace Fsharp

type Histogram =

    static member Hist(s: string) : string =
        "uwxz"
        |> Seq.map (fun letter -> letter, Seq.length (Seq.filter (fun c -> c = letter) s))
        |> Seq.filter (fun (_, num) -> num > 0)
        |> Seq.map (fun (letter, num) -> System.String.Format("{0}  {1,-5} {2}", letter, num, new string ('*', num)))
        |> String.concat "\n"
