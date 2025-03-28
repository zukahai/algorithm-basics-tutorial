const wArr = [3,  7,  7,  7,  4]
const vArr = [40, 10, 20, 10, 5]
w = 15

qhd = (wArr, vArr, w) => {
    wArr.unshift(0);
    vArr.unshift(0);
    let dp = new Array(wArr.length).fill(0).map(() => new Array(w + 1).fill(0));

    for (let i = 1; i < wArr.length; i++)
        for (let j = 1; j <= w; j++)
            if (wArr[i] <= j) {
                dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - wArr[i]] + vArr[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }

    return dp
}

console.log(qhd(wArr, vArr, w));