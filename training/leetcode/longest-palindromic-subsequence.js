/**
 * @param {string} s
 * @return {string}
 */
var longestPalindromeSubseq = function(s) {
    let ans = "";
    let p = getReverString(s);
    s = '#' + s;
    p = '#' + p;
    let dp = new Array(s.length).fill(0).map(() => new Array(p.length).fill(0));
    for (let i = 1; i < s.length; i++)
        for (let j = 1; j < p.length; j++)
            if (s[i] == p[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
            }
    
    let indexI = s.length - 1;
    let indexJ = p.length - 1;
    while (dp[indexI][indexJ] > 0) {
        if (s[indexI] == p[indexJ]) {
            ans += s[indexI];
            indexI--;
            indexJ--;
        } else {
            if (dp[indexI][indexJ - 1] > dp[indexI - 1][indexJ]) {
                indexJ --;
            } else {
                indexI --;
            }
        }
    }
    return ans.length;
};

var getReverString = function(s) {
    let ans = "";
    for (let i = s.length - 1; i >= 0; i--)
        ans += s[i];
    return ans;
}

console.log(longestPalindromeSubseq("bbbab"));
// abac
// caba