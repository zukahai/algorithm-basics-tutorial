const propt = require('prompt-sync')();

// var n = parseInt(propt('Nhập N: '));

soDoiXung = (n) => {
    let oldN = n;
    let array = [];
    while(n !== 0) {
        let p = n % 10;
        n = Math.floor(n / 10);
        array.push(p);
    }

    let soNghichDao = array[0];
    for (let i = 1; i < array.length; i++)
        soNghichDao = soNghichDao * 10 + array[i];

    if (oldN == soNghichDao)
        return true;
    else
        return false;
}

console.log(soDoiXung(5));