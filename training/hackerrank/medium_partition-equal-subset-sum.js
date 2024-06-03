var canPartition = function(nums) {
    let sum = nums.reduce((a, b) => a + b, 0);
    if (sum % 2 !== 0) return false;
    let target = sum / 2;
    let dp = new Array(target + 1).fill(false);
    dp[0] = true;
    for (let num of nums) {
        for (let i = target; i >= num; i--) {
            dp[i] = dp[i] || dp[i - num];
        }
    }
    return dp[target];
};

console.log(canPartition([1, 5, 11, 5]));