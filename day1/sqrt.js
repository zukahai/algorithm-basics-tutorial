sqrt = (n) => {
    let a = 1;
    let b = n;
    
    do {
        var mid = (a + b) / 2;
        // console.log(mid);
        if (mid * mid == n)
            return mid;
        if (mid * mid > n)
            b = mid;
        else
            a = mid;
    } while(abs(mid * mid - n) > 0.0000000000000001);
    return mid;
}

abs = (n) => {
    if (n < 0)
        return -n;
    return n;
}

console.log(sqrt(9));