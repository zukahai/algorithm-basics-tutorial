// Số nguyên tố là số có đúng 2 ước là 1 và chính nó.
// Ví dụ 2, 3, 5, 7, 11,...

// Kiểm tra 1 số có phải là snt hay không?
// Kiểm tra xem từ 2 đến N - 1 có ước không?
// Snt n có 2 ước là 1 và n.
// Nếu n có ước [2, n-1] thì n không phải là snt
// Nếu n có ước [2, sqrt(N)] thì n không phải là snt

isPrime = (n) => {
    if (n < 2)
        return false;
    for (let i = 2; i <= Math.sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

console.log(isPrime(1000000007));
