/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    this.count = n-1;
    return function() {
        this.count++;
        return this.count;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
