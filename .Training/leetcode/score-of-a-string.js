/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function(s) {
    let sum = 0;
    for (let i = 1; i < s.length; i++) {
        sum += Math.abs(s[i].charCodeAt() - s[i - 1].charCodeAt());
    }
    return sum;
};

console.log(scoreOfString("hello"));