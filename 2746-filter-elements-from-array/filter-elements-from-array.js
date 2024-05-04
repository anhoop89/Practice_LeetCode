/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const result = [];
    for (let i = 0; i < arr.length; i++) {
        // since fn is a function, we just need to call it out.
        if (fn(arr[i], i))
            result.push(arr[i]);
    }
    return result;
};