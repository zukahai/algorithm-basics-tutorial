var longestIdealString = function(s, k) {
    let max = 1;
    let marker = new Array(s.length + 1).fill(0);
    marker = marker.map(() => {
        return new Array(27).fill(0);
    })
    marker[0][s[0].charCodeAt() - 97] = 1;
    t = [s[0].charCodeAt() - 97];
    for (let i = 1; i < s.length; i++) {
        let indexI = s[i].charCodeAt();
        t.push(indexI - 97);
        for (let j = 97; j <= 122; j++) {
            marker[i][j - 97] = (marker[i - 1][j - 97] > marker[i][j - 97]) ? marker[i - 1][j - 97] : marker[i][j - 97];
            if (Math.abs(j - indexI) <= k) {
                marker[i][indexI - 97] = (marker[i][indexI - 97] < marker[i - 1][j - 97] + 1) ? marker[i - 1][j - 97] + 1 : marker[i][indexI - 97];
                max = (max < marker[i][indexI - 97]) ? marker[i][indexI - 97] : max;
            }
        }
    }
    return max;
};

const s = 'eduktdb';
const k = 15;

console.log(longestIdealString(s, k));