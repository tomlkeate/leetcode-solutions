/**
 * @param {Function} fn
 */
function memoize(fn) {
    let hashMap = new Map();
    return function(...args) {
        let query = fn.name + args.join(" ");
        if (hashMap.has(query)) return hashMap.get(query);
        hashMap.set(query, fn(...args));
        return hashMap.get(query);
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */
