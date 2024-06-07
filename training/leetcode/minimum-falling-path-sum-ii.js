var minFallingPathSum = function(grid) {
    let n = grid.length;
    let dp = new Array(n).fill(0).map(() => new Array(n).fill(0));
    for (let i = 0; i < n; i++) {
        dp[0][i] = grid[0][i];
    }
    for (let i = 1; i < n; i++){
        for (let j = 0; j < n; j++){
            dp[i][j] = 100000000000;
            for (let k = 0; k < n; k++){
                if (k !== j){
                    dp[i][j] = Math.min(dp[i][j], dp[i - 1][k] + grid[i][j]);
                }
            }
        }
    }
    let res = 100000000000;
    for (let i = 0; i < n; i++){
        res = Math.min(res, dp[n - 1][i]);
    }
    console.log(dp);
    return res;
};

console.log(minFallingPathSum([[1,2,3],[4,5,6],[7,8,9]])); // 13