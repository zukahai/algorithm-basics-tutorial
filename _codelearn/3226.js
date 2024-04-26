function fibSum(n){
    const mod = 1000000007;
    let t1 = 1, t2 = 0, t3;
    let sum = 0;
    for (let i = 1; i <= n; i++) {
        t3 = (t1 + t2) % mod;
        t1 = t2;
        t2 = t3;
        sum = (sum + t3) % mod;
    }
    return sum;
}

console.log(fibSum(3));