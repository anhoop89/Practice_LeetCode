/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
// var argumentsLength = function(...args) {
//     let count = 0;
//     for (let i = 0; i < args.length ; i++) {
//         count++;
//     }
//     return count;
// };

var argumentsLength = function(...args) {
    return args.length;
};
/*
 wow i am so dumb, why i dont call args.length
*/
/**
 * argumentsLength(1, 2, 3); // 3
 */