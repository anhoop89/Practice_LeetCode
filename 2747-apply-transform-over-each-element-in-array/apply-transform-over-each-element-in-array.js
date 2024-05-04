/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const result = [];
    for (let i = 0; i < arr.length; i++) {
        // since fn is a function, we just need to call it out.
        result.push(fn(arr[i], i));
    }
    return result;
    
};