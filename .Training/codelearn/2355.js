function maxComNumbers(n){
    if (n < 0)
        return -2;
    if (n % 2 == 1) {
        return 1 + maxComNumbers(n - 9);
    }
    return Math.floor(n / 4);
}

console.log(maxComNumbers(77));