// https://www.codewars.com/kata/59590976838112bfea0000fa/javascript

export class Beggars
{
	
	/** @param {number[]} values
	 * @param {number} n */
	static beggars(values, n)
	{
		const arr = [];
		
		for (let i = 0; i < n; i++)
		{
			let res = 0;
			for (let j = i; j < values.length; j += n)
			{
				res += values[j];
			}
			arr.push(res);
		}
		
		return arr;
	}
}
