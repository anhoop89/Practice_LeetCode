/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let result = init;
    let count = 0;
    //  this is closure function
    return {
        increment: function() {
            count++;
            result++
            return result
            }
        ,
        decrement: function() {
            count--;
            result--
            return result
            }
        ,
        reset: function() {   
            result -= count;
            count = 0;
            return result;
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