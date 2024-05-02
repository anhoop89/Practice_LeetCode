/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const result = "Hello World"
    return function(...args) {
        return result;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */