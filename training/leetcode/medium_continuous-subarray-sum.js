var checkSubarraySum = function(nums, k) {
    let map = new Map();
    map.set(0, -1);
    for (let i = 0, sum = 0; i < nums.length; i++) {
        sum += nums[i];
        sum %= k;
        if (map.has(sum)) {
            if (i - map.get(sum) > 1) return true;
        } else map.set(sum, i);
    }
    return false;
};

console.log(checkSubarraySum([2, 4, 3], 6));