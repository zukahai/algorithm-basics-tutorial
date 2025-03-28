var twoSum = function(nums, target) {
    let first = new Map();
    let last = new Map();
    nums.forEach((element, index) => {
        if (!first.has(element)) {
            first.set(element, index);
        }
        last.set(element, index);
    });
    for (let index = 0; index < nums.length; index++){
        const element = nums[index];
        if (element * 2 == target) {
            if (first.get(element) != last.get(element))
                return [first.get(element), last.get(element)]
        } else
        if (first.has(target - element)) {
            return [index, first.get(target - element)];
        }
    };
    return [];
};

console.log(twoSum([3, 32, 3], 6));