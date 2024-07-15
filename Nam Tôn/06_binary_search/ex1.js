const map = new Map();

maxArray = (a) => {
    const c = new Map();
    for (let i = 0; i < a.length; i++) {
        c.set(a[i], 1);
    }
    let max = a[0];
    let min = a[0];
    for (let i = 0; i < a.length; i++) {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    for (let i = max; i >= min - 1; i--) {
        if (c.get(i) !== 1)
            return i;
    }
}

console.log(maxArray([3, 2, 4, 1, 1, 0]));