/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    let max = "";
    for (let i = 0; i < s.length; i++) {
        let t = s[i];
        pI = i - 1;
        nI = i + 1;
        while (pI >= 0 && nI < s.length && s[pI] == s[nI]) {
            t = s[pI] + t + s[nI];
            pI--;
            nI++;
        }
        if (max.length < t.length)
            max = t;
    }

    for (let i = 0; i < s.length - 1; i++) {
        if (s[i] != s[i + 1])
            continue;
        let t = s[i] + s[i + 1];
        pI = i - 1;
        nI = i + 2;
        while (pI >= 0 && nI < s.length && s[pI] == s[nI]) {
            t = s[pI] + t + s[nI];
            pI--;
            nI++;
        }
        if (max.length < t.length)
            max = t;
    }
    return max;
}

console.log(longestPalindrome("cbbd"));