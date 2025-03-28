// https://codelearn.io/training/3236

function solve(a, b){
    let count = 0;
    for (let i = a; i <= b; i++)
        count += isSquar(i);
    return count;
}

isSquar = (n) => {
    return Math.floor(Math.sqrt(n)) == Math.sqrt(n);
}

console.log(solve(1, 10));