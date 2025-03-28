const wArr = [3, 7, 7, 7, 4]
w = 15

qhd = (wArr, w) => {
    wArr.unshift(0);
    let dp = new Array(wArr.length).fill(0).map(() => new Array(w + 1).fill(0));

    for (let i = 1; i < wArr.length; i++)
        for (let j = 1; j <= w; j++)
            if (wArr[i] <= j) {
                dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - wArr[i]] + wArr[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }

    return dp[wArr.length - 1][w];
}

console.log(qhd(wArr, w));