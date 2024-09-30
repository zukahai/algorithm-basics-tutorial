sumSquareDigits = (n) => {
    let sum = 0;
    while (n) {
        let digit = n % 10;
        sum += digit * digit;
        n = Math.floor(n / 10);
    }
    return sum;
}

checkHappy = (n) => {
    let list = {};
    n = sumSquareDigits(n);
    while (n !== 1 && !list[n]) {
        list[n] = true;
        n = sumSquareDigits(n);
    }

    return {"isHappy": n === 1, "list": Object.keys(list)};
}

let n = 1000000000000006000
let rs = checkHappy(n);
console.log(rs.isHappy);
console.log(rs.list);

