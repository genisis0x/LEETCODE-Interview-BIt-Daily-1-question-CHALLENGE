/**
 * // This is the Iterator's API interface.
 * // You should not implement it, or speculate about its implementation.
 * function Iterator() {
 *    @ return {number}
 *    this.next = function() { // return the next number of the iterator
 *       ...
 *    }; 
 *
 *    @return {boolean}
 *    this.hasNext = function() { // return true if it still has numbers
 *       ...
 *    };
 * };
 */

/**
 * @param {Iterator} iterator
 */
var PeekingIterator = function(iterator) {
    this.array = new Array();
    while(iterator.hasNext()) {
        this.array.unshift(iterator.next());
    }
};

/**
 * @return {number}
 */
PeekingIterator.prototype.peek = function() {
    return this.array[this.array.length-1];
};

/**
 * @return {number}
 */
PeekingIterator.prototype.next = function() {
    return this.array.pop();
};

/**
 * @return {boolean}
 */
PeekingIterator.prototype.hasNext = function() {
    return this.array.length !== 0;
};

/** 
 * Your PeekingIterator object will be instantiated and called as such:
 * var obj = new PeekingIterator(arr)
 * var param_1 = obj.peek()
 * var param_2 = obj.next()
 * var param_3 = obj.hasNext()
 */
