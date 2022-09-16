package main

import (
	"fmt"
	"strings"
)

type Histogram struct{}

func (h Histogram) Hist(s string) string
{
	count := make(map[rune]int)
	for _, letter := range s
	{
		count[letter]++
	}

	var res []string
	for _, letter := range "uwxz"
	{
		if count[letter] > 0
		{
			num := fmt.Sprintf("%-6d", count[letter])
			stars := strings.Repeat("*", count[letter])
			res = append(res, fmt.Sprintf("%c  %s%s", letter, num, stars))
		}
	}
	return strings.Join(res, "\n")
}
