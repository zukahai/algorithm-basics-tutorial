minPen = (n) => {
    let ans = 0;
    let left = 0;
    let right = 10e15;

    while (left <= right) {
        mid = Math.floor((left + right) / 2);
        let pen = sumPen(mid);
        if (pen == n)
            return mid;
        else if (pen > n) {
            right = mid - 1;
            ans = mid;
        }
        else
            left = mid + 1;
    }

    return ans;
}

penBonus = (k) => {
    return Math.floor(k / 5) * 2;
}

sumPen = (k) => {
    return k + penBonus(k);
}

console.log(minPen(20));
// console.log((Math.floor(91694540168 / 5) * 2) + 91694540168);

//1 + 2 + 3 + ... + n
// n + (n - 1) + (n - 2) +...+1
// s = 1 + 2 + 3 + 4 + 5
// s = 5 + 4 + 3 + 2 + 1
//s + s = 6 * 5
// s = (6 * 5) / 2
// (n + 1) * n / 2
