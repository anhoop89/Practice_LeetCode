/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let accum = init;
    
    if (nums == []) return init;

    for (let i = 0; i < nums.length; i++) {
        // since fn is a function, we just need to call it out.
        console.log("Before/ ", i, nums[i], accum, nums[i] * nums[i], accum)
        accum = fn(accum, nums[i] )
        console.log("After/ ", i, nums[i], accum, nums[i] * nums[i], accum)
    }
    return accum;
};