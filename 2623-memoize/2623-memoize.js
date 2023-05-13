function memoize(fn) {

	const hash_map = {}; 

	return function(...args) {

		const key = JSON.stringify(args);

		if (key in hash_map) {
		  return hash_map[key];
		}

		const result = fn(...args);

		hash_map[key] = result;

		return result;
	}
}