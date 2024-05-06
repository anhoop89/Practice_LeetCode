/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    
    return function(x) {
            let result = x; // let's declare result equal to x. 
            for (let i = functions.length - 1; i >= 0; i--) {
                //  the type like array of functions [function1(input), function2(input),...]
                result = functions[i](result);
            }
            return result;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */