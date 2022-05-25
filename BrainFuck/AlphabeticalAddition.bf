Test with "za\0"
> ++++++++++++
[
    < ++++++++++
    > -
]
< +                 c0 = 121 'y'
>> +++++++++
[
    < ++++++++++
    > -
]
< +++++++++         c1 = 99 'c'
>> +++++++++
[
    < ++++++++++
    > -
]
< ++++++++          c1 = 98 'b'
<<

AlphaNumericalAddition("ycb\0");

string = all characters
helper = cell before string start of 'string'

< + *helper = 1
> string
if (*string)
[
    < - *helper = 0

    Subtract 96 from *string
    _________________________________________

    +++++++++ *helper = 9
    [ while (*helper)
        > ---------- *string minus= 10
        < - *helper minus= 1
    ]
    > ------ *string minus= 96

    Iterate over all characters
    _________________________________________

    > string plus= 1
    [ while (*string)

        Subtract 96 from *string
        _________________________________________

        << +++++++++ *helper = 9
        [ while (*helper)
            >> ---------- *string minus= 10
            << - *helper minus= 1
        ]
        >> ------ *string minus= 96

        < string minus = 1
        [ while (*string)
            > + *(string plus= 1) plus= 1
            < - *(string minus= 1) minus= 1

            Check if overflowing
            _________________________________________
            > --------------------------- *(string plus= 1) minus= 27

            if (*string)
            << + *helper = 1
            >> string
            [
                << - *helper = 0
                >> +++++++++++++++++++++++++++ *string plus= 27
                [ while (*string)
                    << + *helper plus= 1
                    >> - *string minus= 1
                ]
                *helper = *string
            ]
            << helper

            [ while (*helper)
                >> + *string plus= 1
                << - *helper minus= 1
            ]
            >> *string = *helper
            
            < string minus= 1
        ]

        >> string plus= 2
    ]

    Return last cell plus 96
    _________________________________________

    < string minus= 1

    < +++++++++ *helper = 9
    [ while (*helper)
        > ++++++++++ *string plus= 10
        < - *helper minus= 1
    ]
    > ++++++ *string plus= 96

    . return *string
    
    Exit if
    [ - ] *string = 0
]
else
< helper
[
    - *helper = 0

    Return 'z' if c0 was empty
    _________________________________________

    ++++++++++++ *helper = 12
    [ while (*helper)
        > ++++++++++ *string plus= 10
        < - *helper minus= 1
    ]
    > ++ *string = 122 'z'
    . return 'z'
    
    Exit else
    [ - ] next = 0
]