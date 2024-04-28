var longestIdealString = function(s, k) {
    let max = 1;
    let marker = new Array(s.length + 1).fill(0);
    marker = marker.map(() => {
        return new Array(27).fill(0);
    })
    marker[0][s[0].charCodeAt() - 97] = 1;
    for (let i = 1; i < s.length; i++) {
        let codeI = s[i].charCodeAt() - 97;
        for (let codeJ = 0; codeJ <= 25; codeJ++) {
            marker[i][codeJ] = (marker[i - 1][codeJ] > marker[i][codeJ]) ? marker[i - 1][codeJ] : marker[i][codeJ];
            if (Math.abs(codeJ - codeI) <= k) {
                marker[i][codeI] = (marker[i][codeI] < marker[i - 1][codeJ] + 1) ? marker[i - 1][codeJ] + 1 : marker[i][codeI];
                max = (max < marker[i][codeI]) ? marker[i][codeI] : max;
            }
        }
    }
    return max;
};

const s = 'eduktdb';
const k = 15;

console.log(longestIdealString(s, k));