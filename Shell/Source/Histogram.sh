#!/usr/bin/env bash

function hist()
{
	s=$1
	res=""
	letters=('u' 'w' 'x' 'z')
	for letter in "${letters[@]}";
	do
		num=$(grep -o "$letter" <<<"$s" | wc -l)
		if [ "$num" -gt 0 ];
		then
			stars=$(eval "printf *%.0s {1..$num}")
			string=$(printf "%c  %-5d %s\n" "$letter" "$num", "$stars")
			res+="$string"
		fi
	done
	echo "$res" | cut -c1-"$(${#res} - 1)"
}
