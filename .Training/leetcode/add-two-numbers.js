var addTwoNumbers = function (l1, l2) {
    while (l1.length > l2.length)
        l2.push(0);
    while (l1.length < l2.length)
        l2.push(0);
    let ans = [];
    let d = 0;
    for (let i = 0; i < l1.length; i++) {
        const rs = l1[i] + l2[i] + d;
        d = Math.floor(rs / 10);
        ans.push(rs % 10);
    }
    if (d)
        ans.push(d);
    return ans;
};

console.log(addTwoNumbers([2,4,3],[5,6,4]));