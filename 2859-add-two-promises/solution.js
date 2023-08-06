/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    return new Promise((resolve) => {
        let result = 0;
        promise1.then((n) => result+=n).then(() =>
            promise2.then((n) => result+=n).then(() => 
                resolve(result)
            ))
    });
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */
