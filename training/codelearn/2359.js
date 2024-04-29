function countingStar(matrix){
    let flag = new Array(matrix.length).fill(0);
    flag = flag.map((item, index) => {
        return new Array(matrix[0].length).fill(true);
    });
    
    let count = 0;
    for(let i = 0; i < matrix.length; i++){
        for(let j = 0; j < matrix[0].length; j++){
            if(matrix[i][j] === 0 && flag[i][j] === true){
                count++;
                loang(i, j, flag, matrix);
            }
        }
    }
    return count;
}

function loang(x, y, flag, a){
    if(x < 0 || x >= a.length || y < 0 || y >= a[0].length){
        return;
    }
    console.log(x, y);
    if (a[x][y] === 1 || flag[0][1] === false)
        return;
    if (a[x][y] === 0) {
        flag[x][y] = false;
        console.log("aa");
        loang(x - 1, y, flag, a);
        loang(x + 1, y, flag, a);
        loang(x, y - 1, flag, a);
        loang(x, y + 1, flag, a);
    }
}

console.log(countingStar(
    [[1, 0, 1, 1, 1, 1, 1, 1, 1, 1],[0, 0, 0, 0, 0, 0, 0, 0, 0, 0],[1, 0, 1, 1, 1, 1, 1, 1, 1, 1]]));