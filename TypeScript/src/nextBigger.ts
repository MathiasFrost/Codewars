export class NextBigger
{
	public static nextBigger(n: number): number
	{
		const digits: number[] = Array.from(n.toString()).map(s => Number(s));
		let index: number = digits.length - 1;

		// If a digit is greater than the previous, we can swap it
		while (digits[index] <= digits[index - 1])
		{
			index--;
		}

		// If there was none, it is already arranged in the highest possible combination
		if (!index)
		{
			return -1;
		}

		// Split the digits at the swappable number
		const left: number[] = digits.slice(0, index - 1);
		let mid: number = digits[index - 1];
		let right: number[] = digits.slice(index);

		// The number we want to swap is the one that is the smallest of those that are greater than mid
		const candidate = Math.min(...right.filter(n => n > mid));

		// Swap the value of the first occurrence of candidate with mid
		right[right.indexOf(candidate)] = mid;
		mid = candidate;

		// Sort right side to be the smallest possible combination
		right = right.sort((a, b) => a - b);

		return Number([...left, mid, ...right].join(""));
	}
}
