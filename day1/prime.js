const propt = require('prompt-sync')();

isPrime = (n) => {
    if (n < 2)
        return false;
    for (let i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

let num = parseInt(propt('Nhập N: '));
console.log(isPrime(num));
