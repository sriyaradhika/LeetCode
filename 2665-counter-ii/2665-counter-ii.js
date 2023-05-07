/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    //creating ans variable
    var ans = init;
    //returning object to a function
    return{
        increment: () => ++ans,
        decrement: () => --ans,
        reset: () => ans = init
    }  
};


/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */