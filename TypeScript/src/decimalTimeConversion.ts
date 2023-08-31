export function toIndustrial(time: number | string): number {
	let seconds: number;
	if (typeof time === "string") {
		const parts = time.split(':');
		seconds = (Number(parts[0]) * 60 * 60) + (Number(parts[1]) * 60);
	} else {
		seconds = time * 60;
	}

	return Number((seconds / 36 / 100).toFixed(2));
}

export function toNormal(time: number): string {
	const seconds = time * 100 * 36;
	const hours = Math.trunc(seconds / 60 / 60);
	const minutes = Math.round(seconds / 60 % 60);
	return `${hours}:${minutes.toString().padStart(2, '0')}`;
}