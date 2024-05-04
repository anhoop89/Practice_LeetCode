/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    const defaultValue = init;
    //  this is closure function
    return {
        increment: function() {
            return ++init
        }
        ,
        decrement: function() {
            return --init
        }
        ,
        reset: function() {   
            init = defaultValue;
            return defaultValue;
        }
    }
};

const counter = createCounter(5)
console.log("+",counter.increment())
console.log("-",counter.decrement())

console.log("...",counter.reset())
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */