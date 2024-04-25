//  https://leetcode.com/problems/longest-valid-parentheses

var longestValidParentheses = function (s) {
    let max = 0;
    let value = 0;
    for (let i = 0; i < s.length; i++) {
        value = 0;
        for (let j = i; j  < s.length; j++) {
            value += (s[j] == '(') ? 1 : -1;
            if (value < 0)
                break;
            if (value == 0 && max < j - i + 1)
                max = j - i + 1;
        }
    }
      
    return max;
};

const s = "(())()(()((";
console.log((longestValidParentheses(s)));



// var longestValidParentheses = function (s) {
//     let a = [];
//     let first = new Map();
//     let last = new Map();
//     if (s[0] == '(')
//         first.set(0, -1);

//     let value = 0;
//     for (let i = 0; i < s.length; i++) {
//         value += (s[i] == '(') ? 1 : -1;
//         a.push(value);
//         if (!first.has(value) && s[i + 1] == '(')
//             first.set(value, i);
//         if (s[i] == ')')
//             last.set(value, i);
//     }
//     let max = 0;
//     last.forEach((value, key, last) => {
//         let indexFirst = first.get(key);
//         let indexLast = value;
//         if (indexLast - indexFirst > max && s[indexFirst + 1] == '(' && s[indexLast] == ')')
//             max = indexLast - indexFirst;
//     });
//     console.log(first);
//     console.log(last);
//     console.log(a);
//     return max;
// };