#!/usr/bin/env bash

function ShiftChar() {
    if [[ $1 == [a-z] ]]; then echo $(perl -e "print chr(ord('a') + (ord($1) - ord('a') + $2) % 26)")
    elif [[ $1 == [A-Z] ]]; then echo $(perl -e "print chr(ord('A') + (ord($1) - ord('A') + $2) % 26)")
    else echo "$1"
    fi
}

function ComplementBy9()
{
	if [[ $1 == [0-9] ]]; then echo $(perl -e "print chr(ord('9') - ord($1) + ord('0'))")
	else echo "$1"
	fi
}

function DownCaseOdd()
{
	if (( $2 % 2 != 0 )) ; then echo "$1" | tr "[:upper:]" "[:lower:]"
	else echo "$1"
	fi
}

function playPass()
{
	s=$1
	n=$2
	res=""
	for (( i=0; i<${#s}; i++ )); do
		char=$(ShiftChar "${s:$i:1}" "$n")
		char=$(ComplementBy9 "$char")
		char=$(DownCaseOdd "$char" "$i")
    	res="$char$res"
	done

	echo "$res"
}
